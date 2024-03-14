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

bool Dot::operator==(const Dot& target) const{
    if (this->x == target.x && this->y == target.y){
        return true;
    }
    else{
        return false;
    }
}

bool Dot::operator!=(const Dot& target) const{
    return (!(*this == target));
}

// operator kali
Dot operator*(const double kali, const Dot& titik){
    return {titik.x*kali,titik.y*kali};
}

Dot operator*(const Dot& titik, const double kali){
    return {titik.x*kali,titik.y*kali};
}

// operator plus
Dot operator+(const Dot& a, const Dot& b){
    return {a.x + b.x, a.y + b.y};
}

void Dot::setY(double sety) {
    this->y = sety;
}

void Dot::setX(double setx) {
    this->x = setx;
}