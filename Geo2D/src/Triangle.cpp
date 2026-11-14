#include "Triangle.h"

Triangle::Triangle() : p1(), p2(), p3() {}

Triangle::Triangle(Point a, Point b, Point c) {
    p1 = a;
    p2 = b;
    p3 = c;
}

double Triangle::perimetre() const {
    Segment s1(p1, p2);
    Segment s2(p2, p3);
    Segment s3(p3, p1);

    return s1.longueur() + s2.longueur() + s3.longueur();
}