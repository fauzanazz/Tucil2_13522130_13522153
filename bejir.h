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
    // Constructor
    // Init class bejir
    bejir(int maxIterasi);

    // Setter
    // Menubah garis bezier
    void setGarisBezier(Line set);

    // Getter
    // Mengembalikan max iterasi
    int getMaxIterasi() const;
    // Mengembalikan garis bezier
    Line getGarisBezier() const;

    // Menerima dua buah titik dan mengembailkan titik tengah;
    static Dot TitikTengah(Dot point1, Dot point2);

    // Menambahkan titik ke kurva bezier secara rekursive
    void AddBezierCurve(Dot point1, Dot Point2, Dot Point3, int iterasi);

    // Brute force bezier
    void BruteForceBezier(Dot point1, Dot point2, Dot point3);

    // Bezier dengan algoritma garis tengah
    void divconNbezier(Line);
    std::vector<Dot> bezier(const std::vector<Dot>& controlPoints, float t);
    std::vector<Dot> DnCBezierPoint(const std::vector<Dot>& controlPoints, int numIterations);

    // Brute force n control
    static Dot calculateBezierPoint(double t, const std::vector<Dot> &points);
    static Line calculateBezierPoint(const std::vector<Dot> &points, int iter);

    // Menambahkan satu titik ke kurva bezier paling terakhir
    void addLast(Dot titik);

    // Menampilkan garis dari kurva beizer
    void print();

    // Fungsi tambahan
    // Menghitung faktorial
    static double factorial(std::size_t n);

};

#endif //KURVA_BEZIER_BEJIR_H
