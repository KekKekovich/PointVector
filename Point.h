//
// Created by PACKARD BELL on 13.12.2017.
//

#ifndef UNTITLED9_POINT_H
#define UNTITLED9_POINT_H
#include <iostream>
#include <cmath>


using namespace std;


class Point {
public:
    double x;
    double y;
    double z;
    double r;

    Point();
    Point (double x, double y, double z);
    ~Point();

    void print(){
        cout << " x = " << x << " y = " << y << " z = " << z << "; r = "<< r << endl;
    }

    bool operator<(const Point &P) const;

    friend ostream &operator<<(ostream &os, const Point &Point1);
};







#endif //UNTITLED9_POINT_H
