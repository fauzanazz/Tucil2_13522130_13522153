//
// Created by mfauz on 3/13/2024.
//

#ifndef KURVA_BEZIER_DOT_H
#define KURVA_BEZIER_DOT_H

class Dot{
private:
    double x;
    double y;
public:
    // Constructor
    //Init dot dengan inputan titik x dan y
    Dot(double x, double y);

    // Setter
    // Mengubah nilai x dari titik
    void setX(double setx);
    // Mengubah nilai y dari titik
    void setY(double sety);

    // Getter
    // Mengembalikan nilai x dari titik
    double getX() const;

    // Mengembalikan nilai y dari titik
    double getY() const;

    // Menampilkan dot ke layar
    void print() const;


    // Operator
    // Operator untuk mengecek apakah titik sama
    bool operator!=(const Dot&) const;
    // Operator untuk mengecek apakah titik tidak sama
    bool operator==(const Dot&) const;
    // Operator untuk mengalikan titik dengan skalar
    friend Dot operator*(double, const Dot&);
    // Operator untuk mengalikan titik dengan skalar
    friend Dot operator*(const Dot&, double );
    // Operator untuk menambahkan dua titik
    friend Dot operator+(const Dot&, const Dot&);

};


#endif //KURVA_BEZIER_DOT_H
