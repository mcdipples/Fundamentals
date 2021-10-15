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

Rectangle::Rectangle(double width, double length)
{
    this->length = length;
    this->width = width; 
}
double Rectangle::calcArea()
{
    return width * length; 
}

double Rectangle::calcPerimeter()
{
    return (width * 2) + (length * 2);
}