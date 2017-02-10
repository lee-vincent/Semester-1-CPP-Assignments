

/*
 * File: Point.cpp
 * Author: Vincent Lee
 * Date: 5/10/2015
 * Description: The implementation of the Point class
 */




#include "Point.hpp"
#include <cmath>



Point::Point() {
    x = 0.0;
    y = 0.0;
}


Point::Point(double xC, double yC) {
    x = xC;
    y = yC;
}


void Point::setXCoord(double xC) {
    x = xC;
}

void Point::setYCoord(double yC) {
    y = yC;
}

double Point::getXCoord() {
    return x;
}

double Point::getYCoord() {
    return y;
}


//returns the distance using the standard distance formula
//the sqrt() function from the cmath library is leveraged
//to calculate distance
double Point::distanceTo(const Point& p) const {
    return sqrt((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y));
}
