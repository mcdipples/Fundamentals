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
PROGRAM: Header file for Rectangle class. 
****************************************************************************************/
#include "shape.h"

class Rectangle : public Shape
{
    private:

    double width;
    double length;

    public:

    Rectangle(double width, double length);
    ~Rectangle(){}

    virtual double calcArea();

    virtual double calcPerimeter();

};

#endif