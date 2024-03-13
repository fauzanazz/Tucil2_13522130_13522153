//
// Created by mfauz on 3/13/2024.
//

#ifndef KURVA_BEZIER_LINE_H
#define KURVA_BEZIER_LINE_H


#include <vector>
#include "Dot.h"

/// Kelas List of titik
class Line{
private:
    // List of titik
    std::vector<Dot> dotlist;
    int neff;
public:
    // Initialize List of titik, list of titik akan memiliki vector titik yang kosong dan neff = 0
    Line();
    // Menampilkan list of titik ke layar
    void show();
    // Menambahkan titik baru ke list of titik
    Line& operator+=(const Dot& titik);
};

#endif //KURVA_BEZIER_LINE_H
