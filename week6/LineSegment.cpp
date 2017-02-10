/*
 * File: LineSegment.cpp
 * Author: Vincent Lee
 * Date: 5/10/2015
 * Description: The implementation of the LineSegment class
 * A LineSegment is comprised of two Point objects 
 */


#include "LineSegment.hpp"


LineSegment::LineSegment() {
    p1 = Point();
    p2 = Point();
}

LineSegment::LineSegment(Point point1, Point point2) {
    p1 = point1;
    p2 = point2;
}


void LineSegment::setEnd1(Point point1) {
    p1 = point1;
}

void LineSegment::setEnd2(Point point2){
    p2 = point2;
}



Point LineSegment::getEnd1() {
    return p1;
}

Point LineSegment::getEnd2() {
    return p2;
}

double LineSegment::length() {
    return p1.distanceTo(p2);
}

double LineSegment::slope() {
    return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
}
