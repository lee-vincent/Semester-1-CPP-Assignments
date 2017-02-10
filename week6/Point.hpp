
/*
 * File: Point.hpp
 * Author: Vincent Lee
 * Date: 5/10/2015
 * Description: This interface defines a class
 * that represents a point in an (x,y) coordinate system
 * */



#ifndef week6_Point_h
#define week6_Point_h


class Point {
    
    public:
        
        
        Point();
        Point (double xC, double yC);
        
        void setXCoord(double xC);
        void setYCoord(double yC);
        
        double getXCoord();
        double getYCoord();
        
        double distanceTo(const Point& p) const;
        
    private:

        double x;
        double y;
        
    
};








#endif
