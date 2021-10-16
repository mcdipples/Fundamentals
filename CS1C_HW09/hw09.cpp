/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW09
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 10/15/2021
*****************************************************************************************
PROGRAM: HW09 - Abstract classes and virtual functions. This program Instantiates a
Rectangle and a Triangle object of type Shape. Calls functions to calculate perimeter/area
of each shape, then prints them to the console.
****************************************************************************************/
#include "shape.h"
#include "triangle.h"
#include "rectangle.h"


void printPerimeter(Shape& obj);        // Prints perimeter of shape 
void printArea(Shape& obj);             // Prints area of shape 


int main()
{
    double x;       // side 1
    double y;       // side 2
    double z;       // side 3   
    double l;       // length (rectangle)
    double w;       // width (rectangle)

    // ====================================================
    // Output: prompting user to enter shape information
    // Input: taking user input for shape side information
    // ====================================================
    cout << "Enter side1 for Triangle:  ";
    cin >> x; 
    cout << "Enter side2 for Triangle:  ";
    cin >> y; 
    cout << "Enter side 3 for Triangle:  ";
    cin >> z; 

    // Instantiating Triangle object
    Triangle triangle(x, y, z);
    cout << "______________________________________________\n";
    printPerimeter(triangle);
    printArea(triangle);

    // ====================================================
    // Output: prompting user to enter shape information
    // Input: taking user input for shape side information
    // ====================================================
    cout << "\n====================================================\n";
    cout << endl << "Enter length of Rectangle:  ";
    cin >> l; 
    cout << "Enter width of Rectangle:  ";
    cin >> w;
    
    // Instantiating Rectangle object
    Rectangle rectangle(l, w);
    cout << "______________________________________________\n";
    printPerimeter(rectangle);
    printArea(rectangle);


    return 0;
}

// ==== Nonmember functions ================================

/****************************************************************************************
* void printPerimeter(Shape& obj):
* _______________________________________________________________________________________
* Passes a Shape object within parameters to the function so that the function may call 
* the object's calcPerimeter() function. Outputs the object's perimeter to the console. 
****************************************************************************************/
void printPerimeter(Shape& obj)
{
    cout << "Perimeter of the shape is: " << obj.calcPerimeter() << endl;
}

/****************************************************************************************
* void printArea(Shape& obj):
* _______________________________________________________________________________________
* Passes a Shape object within parameters to the function so that the function may call 
* the object's calcArea() function. Outputs the object's area to the console. 
****************************************************************************************/
void printArea(Shape& obj)
{
    cout << "Area of the shape is: " << obj.calcArea() << endl;
}
