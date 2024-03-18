//
// Created by mfauz on 3/13/2024.
//

#include "Line.h"
#include <iostream>

Line::Line() {
    neff = 0;
}

Dot& Line::operator[](const int& s){
    return this->dotlist[s];
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

int Line::length() const{
    return neff;
}

Line& Line::operator+=(const Line& garis){
    this->neff += garis.neff;
    for (int i = 0; i < garis.length(); i++){
        this->dotlist.push_back(garis.dotlist[i]);
    }
    return *this;
}

