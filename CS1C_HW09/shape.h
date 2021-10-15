#ifndef shape_H
#define shape_H
/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW09
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 10/15/2021
*****************************************************************************************
PROGRAM: Abstract base class Shape that will be used to derive shapes such as Rectangle
and Triangle from. Includes two virtual functions that will be use to make calculations 
of the data members of each shape depending on which type it is. 
****************************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


class Shape
{

    public:

        // default constructor
        Shape(){}
        // Destructor 
        ~Shape(){} 
        // Virtual function used to calculate the perimeter of a shape
        virtual double calcPerimeter() = 0;
        // Virtual function used to calculate the area of a shape 
        virtual double calcArea() = 0;

       // private:

       // double perimeter;
       // double area;
};

    // ==== Nonmember functions ================================
    // Prints the perimeter of the object
    void printPerimeter(Shape &obj)
    {
        cout << "Area of the shape is: " << obj.calcPerimeter() << endl;
    }
    
    // Prints the area of the object 
    void printArea(Shape &obj)
    {
        cout << "Perimeter of the shape is: " << obj.calcArea() << endl;
    }


#endif