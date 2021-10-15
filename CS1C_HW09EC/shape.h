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
PROGRAM: HW09 Extra Credit Assignment
****************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


class Shape
{
    public:

        // constructor
        Shape(int x, int y) : x{x}, y{y} {}
        // Destructor 
        ~Shape(){} 

        // Print: prints out the object's information. 
        void print() const;

    private: 
    int x;      // x-coordinate
    int y;      // y-coordinate
};

#endif