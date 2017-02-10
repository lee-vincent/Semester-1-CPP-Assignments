

/*----------------------------------------   
 * File: Box.h
 * Author: Vincent Lee
 * Date: 4/29/2015
 * Description: This interface exports a class for representing
 * a 6-sided box object
 *----------------------------------------
 */




#ifndef BOX_HPP
#define BOX_HPP


class Box {


private:
    
    double  length,
            width,
            height;


public:
    
 /*
 * Constructor:	 Box
 * Usage:	 Box boxObject;
 *		 Box boxObject(l, w, h);
 * -----------------------------------------------------
 * Creates a Box object. The default constructor creates the Box
 * with length, width, and height set to 1.
 */
    Box();
    Box(double l, double w, double h);
    
    
    
 /*
 * Accessor methods
 */
    void setHeight(double h);
    void setWidth(double w);
    void setLength(double l);
    double getVolume() ;
    double getSurfaceArea() ;


};





#endif
