#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Segment.h"

class Triangle {
private:
    Point p1, p2, p3;

public:
    Triangle();
    Triangle(Point a, Point b, Point c);

    double perimetre() const;
};

#endif