#ifndef TRIANGLE_H
#define TRIANGLE_H
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

    double side1;           // x
    double side2;           // y
    double side3;           // z

public:

    // Overloaded constructor for passing values from main into the class object
    Triangle(double side1, double side2, double side3);
    
    // Virtual function from within base class
    virtual double calcArea() override;

    // Virtual function from within base class
    virtual double calcPerimeter() override;

};

#endif