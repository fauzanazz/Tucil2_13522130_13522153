#include <valarray>
#include "bejir.h"
#include <cmath>
#include <iostream>

bejir::bejir(int maxIterasi) {
    this->garisBezier = Line();
    this->max_iterasi = maxIterasi;
}

int bejir::getMaxIterasi() const {
    return this->max_iterasi;
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
    
    for (float i = 0; i <= max_iterasi; i++){
        float t = i/max_iterasi;
        Dot titik = (point1*pow(1-t,2)) + (point2*(1-t)*t) + (point3*pow(t,2));
        this->garisBezier += titik;
    }

}

void bejir::addLast(Dot titik) {
    garisBezier += titik;
}

double bejir::factorial(size_t n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
