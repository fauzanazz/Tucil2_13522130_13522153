#include <valarray>
#include "bejir.h"
#include <cmath>

bejir::bejir(int maxIterasi) {
    this->garisBezier = Line();
    this->max_iterasi = maxIterasi;
}

int bejir::getMaxIterasi() const {
    return this->max_iterasi;
}

bejir& bejir::operator=(const bejir& second){
    this->garisBezier = second.garisBezier;
    this->max_iterasi = second.max_iterasi;
    return *this;
}

Dot bejir::TitikTengah(Dot point1, Dot point2) {
    return {(point1.getX() + point2.getX()) / 2,(point1.getY() + point2.getY()) / 2 };
}

void bejir::addLast(Dot titik) {
    garisBezier += titik;
}

void bejir::print() {
    garisBezier.show();
}


Dot bejir::calculateBezierPoint(double t, const std::vector<Dot> &points) {
    Dot result = Dot(0,0);
    size_t n = points.size() - 1;
    for (int i = 0; i <= n; i++) {
        // Calculate the binomial coefficient
        double binCoeff = factorial(n) / (factorial(i) * factorial(n - i));
        // Calculate the Bernstein polynomial
        double bernsteinPoly = binCoeff * std::pow(t, i) * std::pow(1 - t, n - i);
        // Add the term to the result
        result.setX(result.getX() + bernsteinPoly * points[i].getX());
        result.setY(result.getY() + bernsteinPoly * points[i].getY());
    }
    return result;
}


void bejir::divconNbezier(Line garis){
    if (garis.length() > 2 && getMaxIterasi() > 0){
        //variables
        int iter = getMaxIterasi();
        Line result;

        //divide per "sudut" / 3 titik, kirinya
        Dot LP, CP, RP, LMP, RMP, CMP;
        Dot prev_CMP;

        for (int i = 0; i < garis.length() - 2; i++){
            bejir temp(iter);
            LP = garis[i];//left point
            CP = garis[i+1];//center point
            RP = garis[i+2];//right point
            LMP = TitikTengah(LP,CP);
            RMP = TitikTengah(CP,RP);
            CMP = TitikTengah(LMP,RMP);

            //khusus untuk garis paling kiri
            if (i == 0) {
                temp.AddBezierCurve(LP,LMP,CMP,1);
                result += LP;
            }
            else{
                temp.AddBezierCurve(prev_CMP,LMP,CMP,1);
                result += prev_CMP;
            }
            result += temp.garisBezier;
            // pindahkan CMP sekarang ke prevCMP untuk iterasi selanjutnya
            prev_CMP = CMP;
        }
        //paling kanan
        bejir temp(iter);
        temp.AddBezierCurve(CMP,RMP,RP,1);
        result += CMP;
        result += temp.garisBezier;
        result += RP;

        this->garisBezier = result;
    }
};

void bejir::AddBezierCurve(Dot point1, Dot point2, Dot point3, int iterasi) {
    if (iterasi < getMaxIterasi()){
        Dot titik_tengah1 = TitikTengah(point1,point2);
        Dot titik_tengah2 = TitikTengah(point2,point3);
        Dot titik_tengah3 = TitikTengah(titik_tengah1, titik_tengah2);

        AddBezierCurve(point1,titik_tengah1,titik_tengah3,iterasi+1);
        garisBezier += titik_tengah3;
        AddBezierCurve(titik_tengah3, titik_tengah2, point3, iterasi+1);
    }
}

void bejir::BruteForceBezier(Dot point1, Dot point2, Dot point3){

    for (int i = 0; i <= max_iterasi; i++){
        float t =  (float) i / (float) max_iterasi;
        this->garisBezier += (point1 * pow(1-t,2)) + (point2*(1-t)*t) + (point3 * pow(t,2));
    }

}

double bejir::factorial(size_t n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
