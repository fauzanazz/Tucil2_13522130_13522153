#include "Dot.h"
#include "Line.h"
#include "bejir.h"
#include <iostream>

int main() {
    Dot titik1 = Dot(0, 0);
    Dot titik2 = Dot(1, 2);
    Dot titik3 = Dot(3, 1);


    //bejir bezierCurve = bejir(3);
    //bezierCurve.addLast(titik1);
    //bezierCurve.AddBezierCurve(titik1,titik2,titik3,0);
    //bezierCurve.addLast(titik3);

    //bezierCurve.print();

    //Brute force
    std::cout << "BRUTE FORCE BEJIR CURVE" << std::endl;
    bejir brute = bejir(20);
    brute.BruteForceBezier(titik1,titik2,titik3);

    std::cout << "BRUTE RESULT" << std::endl;
    brute.print();

    std::vector<Dot> points = {
            Dot(0,0),
            Dot(1,2),
            Dot(3,1),
            Dot(4,3)
    };

    for (double t = 0; t <= 1.01; t += 0.01) {
        Dot point = bejir::calculateBezierPoint(t, points);
        std::cout << "Point at t=" << t << ": (" << point.getX() << ", " << point.getY() << ")\n";
    }

    return 0;
}
