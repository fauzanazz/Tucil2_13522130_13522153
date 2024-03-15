//
// Created by mfauz on 3/13/2024.
//

#include "Line.h"

Line::Line() {
    neff = 0;
}

void Line::show() {
    for (int i = 0; i < neff; i++) {
        dotlist[i].print();
    };
}

Line& Line::operator+=(const Dot& titik){
    if (neff == 0){
        this->dotlist.push_back(titik);
        neff++;
    }
    else if (dotlist[neff-1] != titik){
        this->dotlist.push_back(titik);
        neff++;
    }
    return *this;
}

Line& Line::operator+=(const Line& garis){
        // Add the elements of garis to the current object
        for (const auto& dot : garis.getVector()) {
            this->dotlist.push_back(dot);
        }

        // Update neff
        this->neff = this->dotlist.size();

        // Return the current object
        return *this;
}

int Line::length() const{
    return neff;
}

Dot &Line::operator[](const int &s) {
    return dotlist[s];
}

std::vector<Dot> Line::getVector() const{
    return dotlist;
}

Dot Line::interpolate(Dot start, Dot end, double t) {
    double x = start.getX() + t * (end.getX() - start.getX());
    double y = start.getY() + t * (end.getY() - start.getY());
    return Dot(x, y);
}

void Line::clear(){
    neff = 0;
    dotlist.clear();
}
