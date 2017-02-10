


/*
 * File: LineSegment.hpp
 * Author: Vincent Lee
 * Date: 5/10/2015
 * Description: This interface defines a class
 * that represents a line connecting two points in an (x,y) coordinate system
 */




#ifndef __week6__LineSegment__
#define __week6__LineSegment__

#include "Point.hpp"




class LineSegment {

public:
    
    
    LineSegment();
    LineSegment(Point point1, Point point2);
    
    void setEnd1(Point point1);
    void setEnd2(Point point2);
    
    Point getEnd1();
    Point getEnd2();
    
    double length();
    double slope();

    
    
private:
    
    Point p1, p2;
    

};






#endif /* defined(__week6__LineSegment__) */
