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

bool Dot::operator==(const Dot& target){
    if (this->x == target.x && this->y == target.y){
        return true;
    }
    else{
        return false;
    }
}

bool Dot::operator!=(const Dot& target){
    return (!(*this == target));
}

// operator kali
Dot operator*(const float kali, const Dot& titik){
    return Dot(titik.x*kali,titik.y*kali);
}

Dot operator*(const Dot& titik, const float kali){
    return Dot(titik.x*kali,titik.y*kali);
}

// operator plus
Dot operator+(const Dot& a, const Dot& b){
    return Dot(a.x + b.x, a.y + b.y);
}