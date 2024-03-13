//
// Created by mfauz on 3/13/2024.
//
#include "Dot.h"

Dot::Dot(double x, double y) {
    this->x = x;
    this->y = y;
}

void Dot::print() const {
        std::cout << "[" << x << "," << y << "]";
}

double Dot::getX() const {
    return this->x;
}

double Dot::getY() const {
    return this->y;
}