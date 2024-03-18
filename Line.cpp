//
// Created by mfauz on 3/13/2024.
//

#include "Line.h"

Line::Line() {
    neff = 0;
}

void Line::show() {
    std::cout << "[";
    for (int i = 0; i < neff; i++) {
        dotlist[i].print();
        if (i < neff-1){
            std::cout << ",";
        }
    };
    std::cout << "]";
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

std::vector<Dot>* Line::changeVector(){
    return &dotlist;
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

int Line::maxX(){
    int max = dotlist[0].getX();
    for (int i = 1; i < neff; i++){
        if (dotlist[i].getX() > max){
            max = dotlist[i].getX();
        }
    }
    return max;
}

int Line::maxY(){
    int max = dotlist[0].getY();
    for (int i = 1; i < neff; i++){
        if (dotlist[i].getY() > max){
            max = dotlist[i].getY();
        }
    }
    return max;
}

int Line::minX(){
    int min = dotlist[0].getX();
    for (int i = 1; i < neff; i++){
        if (dotlist[i].getX() < min){
            min = dotlist[i].getX();
        }
    }
    return min;
}

int Line::minY(){
    int min = dotlist[0].getY();
    for (int i = 1; i < neff; i++){
        if (dotlist[i].getY() < min){
            min = dotlist[i].getY();
        }
    }
    return min;
}   
