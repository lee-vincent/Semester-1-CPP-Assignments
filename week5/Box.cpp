/*---------------------------------------- 
 * File: Box.cpp
 * Author: Vincent Lee
 * Date: 4/29/2015
 * Description: This file implements the Box class
 *----------------------------------------
*/



#include "Box.hpp"

/* Implementation notes: Constructors
 *  ---------------------------------------
 * There are two constructors for the Box class. 
 * The default contructor creates a Box with a
 * length, width, and height initialized to 1.
 * The three argument contructor initializes
 * the length, width and height fields to the
 * corresponding parameter values.
 */

Box::Box() {
    Box::setLength(1.0);
    Box::setWidth(1.0);
    Box::setHeight(1.0);
}


Box::Box(double l, double w, double h) {
    Box::setLength(l);
    Box::setWidth(w);
    Box::setHeight(h);
}


void Box::setLength(double l) {
    length = l;
}

void Box::setWidth(double w) {
    width = w;
}

void Box::setHeight(double h) {
    height = h;
}


double Box::getVolume()  {
    return length * width * height;
}

double Box::getSurfaceArea()  {
    return  (2 * length * width) +
            (2 * length * height)+
            (2 * width * height);
} 
