#include "Dot.h"
#include "Line.h"
#include "bejir.h"

int main() {
    Dot titik1 = Dot(0, 0);
    Dot titik2 = Dot(1, 2);
    Dot titik3 = Dot(3, 1);

    bejir bezierCurve = bejir(3);
    bezierCurve.addLast(titik1);
    bezierCurve.AddBezierCurve(titik1,titik2,titik3,0);
    bezierCurve.addLast(titik3);

    bezierCurve.print();

    return 0;
}
