//
// Created by mfauz on 3/13/2024.
//

#include "Line.h"

#ifndef KURVA_BEZIER_BEJIR_H
#define KURVA_BEZIER_BEJIR_H

class bejir{
private:
    Line garisBezier;
    int max_iterasi;
public:
    // Setter
    // Init class bejir
    bejir(int maxIterasi);

    // Getter
    // Mengembalikan max iterasi
    int getMaxIterasi() const;

    // Menerima dua buah titik dan mengembailkan titik tengah;
    static Dot TitikTengah(Dot point1, Dot point2);


    // Menambahkan titik ke kurva bezier secara rekursive
    void AddBezierCurve(Dot point1, Dot Point2, Dot Point3, int iterasi);

    // Brute force bezier
    void BruteForceBezier(Dot point1, Dot point2, Dot point3);

    // Menambahkan satu titik ke kurva bezier paling terakhir
    void addLast(Dot titik);

    // Menampilkan garis dari kurva beizer
    void print();
};

#endif //KURVA_BEZIER_BEJIR_H
