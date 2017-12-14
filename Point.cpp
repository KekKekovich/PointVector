//
// Created by PACKARD BELL on 13.12.2017.
//

#include "Point.h"
#include <cmath>

double Rand (double fMin, double fMax) {
    double f=(double)rand()/ RAND_MAX;
    return fMin+f*(fMax-fMin);
}

Point::Point() {
    Point::x = Rand(-100, 100);
    Point::y = Rand(-100, 100);
    Point::z  =Rand(-100, 100);
    Point::r = sqrt ((x*x)+(y*y)+(z*z));
}

Point::~Point(){

}

Point::Point(double x, double y, double z) {
    Point::x = x;
    Point::y = y;
    Point::z = z;
    Point::r = sqrt ((x*x)+(y*y)+(z*z));
}

bool Point::operator<(const Point &P) const {
    return ( sqrt( x*x + y*y + z*z ) < sqrt(  (P.x*P.x) + (P.y*P.y) + (P.z*P.z) ));
}

ostream &operator<<(ostream &os, const Point &Point1) {

    os << " r = " << Point1.r;
    return os;
}

