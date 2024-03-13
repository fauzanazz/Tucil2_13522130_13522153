//
// Created by mfauz on 3/13/2024.
//

#ifndef KURVA_BEZIER_DOT_H
#define KURVA_BEZIER_DOT_H

#include <iostream>

class Dot{
private:
    double x;
    double y;
public:
    // Setter
    //Init dot dengan inputan titik x dan y
    Dot(double x, double y);

    // Getter
    // Mengembalikan nilai x dari titik
    double getX() const;

    // Mengembalikan nilai y dari titik
    double getY() const;

    // Menampilkan dot ke layar
    void print() const;


};


#endif //KURVA_BEZIER_DOT_H
