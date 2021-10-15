#ifndef RECTANGLE_H
#define RECTANGLE_H
/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW09
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 10/15/2021
*****************************************************************************************
PROGRAM: Header file for Triangle class. 
****************************************************************************************/
#include "shape.h"

class Triangle : public Shape
{
    private:

    double side1;
    double side2;
    double side3;
    double area;
    
    public:

    Triangle(double side1, double side2, double side3, double s);

    virtual double calcArea();
    
    virtual double calcPerimeter();

};

#endif