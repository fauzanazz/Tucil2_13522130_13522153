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

Line& Line::operator+=(const Dot &titik) {
    this->dotlist.push_back(titik);
    neff++;
    return *this;
}

