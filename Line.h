//
// Created by mfauz on 3/13/2024.
//

#ifndef KURVA_BEZIER_LINE_H
#define KURVA_BEZIER_LINE_H


#include <vector>
#include "Dot.h"
#include <iostream>

/// Kelas List of titik
class Line{
private:
    // List of titik
    std::vector<Dot> dotlist;
    int neff;
public:

    // Constructor
    // Initialize List of titik, list of titik akan memiliki vector titik yang kosong dan neff = 0
    Line();

    // Menampilkan list of titik ke layar
    void show();

    // Setter
    // Mengembalikan pointer ke list of titik
    std::vector<Dot>* changeVector();

    // Menambahkan titik baru ke list of titik
    Line& operator+=(const Dot& titik);
    // Menambahkan list of titik baru ke list of titik
    Line& operator+=(const Line& garis);

    // Menghapus semua titik
    void clear();

    // Memungkinkan untuk mengecek titik melalui operator []
    Dot& operator[](const int&);

    // Getter
    // Mengembalikan titik dalam list of titik
    std::vector<Dot> getVector() const;
    // Mengembalikan jumblah titik dalam line
    int length() const;

    // Fungsi tambahan
    // Interpolasi  titik pada garis
    static Dot interpolate(Dot start, Dot end, double t);

    // Max Min getter
    // Mengembalikan nilai maksimum x dari titik dalam list of titik
    int maxX();
    // Mengembalikan nilai maksimum y dari titik dalam list of titik
    int maxY();
    // Mengembalikan nilai minimum x dari titik dalam list of titik
    int minX();
    // Mengembalikan nilai minimum y dari titik dalam list of titik
    int minY();
};

#endif //KURVA_BEZIER_LINE_H
