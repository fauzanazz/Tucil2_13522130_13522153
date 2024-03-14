
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

void bejir::print() {
    garisBezier.show();
}