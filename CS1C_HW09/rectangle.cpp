/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW09
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 10/15/2021
*****************************************************************************************
PROGRAM: Implementation file for Rectangle class.
****************************************************************************************/
#include "rectangle.h"

/****************************************************************************************
* Rectangle constructor:
* _______________________________________________________________________________________
* Constructor for objects of the Rectangle class. 
****************************************************************************************/
Rectangle::Rectangle(double width, double length)
{
    this->length = length;
    this->width = width;
}

/****************************************************************************************
* virtual double calcArea():
* _______________________________________________________________________________________
* Virtual function derived from base class Shape used to calculate the area of the 
* Rectangle by multiplying its length times width.  
****************************************************************************************/
double Rectangle::calcArea()
{
    return width * length;
}

/****************************************************************************************
* virtual double calcPerimeter():
* _______________________________________________________________________________________
* Virtual function derived from base class Shape used to calculate the perimeter of the 
* Rectangle.  
****************************************************************************************/
double Rectangle::calcPerimeter()
{
    return (width * 2) + (length * 2);
}