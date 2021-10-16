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

Triangle::Triangle(double side1, double side2, double side3)
{
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
}

/****************************************************************************************
* virtual double calcArea():
* _______________________________________________________________________________________
* Virtual function derived from base class Shape used to calculate the area of the 
* Rectangle by multiplying its length times width.  
****************************************************************************************/
double Triangle::calcArea()
{
    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area; 
}

/****************************************************************************************
* virtual double calcPerimeter():
* _______________________________________________________________________________________
* Virtual function derived from base class Shape used to calculate the perimeter of the 
* Triangle.  
****************************************************************************************/
double Triangle::calcPerimeter()
{
    return side1 + side2 + side3;
}