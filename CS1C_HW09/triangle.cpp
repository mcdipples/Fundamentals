/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW09
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 10/15/2021
*****************************************************************************************
PROGRAM: Implementation file for Triangle class. 
****************************************************************************************/
#include "triangle.h"

Triangle::Triangle(double side1, double side2, double side3, double s)
{
    this->side1 = side1;
    this->side2 = side2;
    this->side2 = side2;
}

double Triangle::calcArea()
{
    double s = (side1 + side2 + side3)/2;
    return sqrt(s*(s-side1)*(s-side2)*(s-side3));  
}

double Triangle::calcPerimeter()
{
    return side1 + side2 + side3;
}