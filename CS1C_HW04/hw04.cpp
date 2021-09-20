#include "Date.h"
#include "Employee.h"
#include "Programmer.h"

/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 03
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/14/2021
****************************************************************************************/
int main ()
{
//============================================================================
// Output the class heading to the screen 
//============================================================================
cout << "***************************************** \n"
     << "   Programmed by: Sierra Martin\n"
     << "   Student ID   : 1130942\n"
     << "   CS1C         : T-TH 12:30p - 2:50p\n"
     << "   HW           :  \n"
     << "*****************************************\n";
//============================================================================

//============================================================================
// Initializing an Employee and a Programmer object. 

Employee emp1("James Corden", 87654, "703-703-1234", 37, 'M', "Talk Show Host", "$900,000", 12, 25, 2014);
Programmer prog1(5432122, "Joe Boss", "Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", "$770,123", 12, 24, 2011, 4.00, "Yes", "Yes");

//============================================================================
// Outputting contents of these objects. 
cout << "\nEmployee object information:\n";
cout << emp1 << endl; 

if (!(emp1 == prog1))
{
    cout << "The two phone numbers are not equal.\n";
}

//============================================================================
// Changing the phone number in our Employee object. 
cout << "Now changing the phone number of the Employee...\n";
emp1.setPhone("$819-123-4567");

if (!(emp1 == prog1))
{
    cout << "The two phone numbers are now equal!\n\n";
}

cout << "Here is the new Employee information after changing the phone:\n";
cout << emp1 << endl;

//============================================================================
// Adding to the age of the Employee object. 
emp1 += 3;

cout << "Here is the new Employee information after changing the age:\n";
cout << emp1 << endl;

//============================================================================
// Taking user input for the Employee object.
cout << "Please enter values for the Employee object in this format:\n"
     << "Name\n"
     << "ID\n"
     << "Phone\n"
     << "Age\n"
     << "Gender\n"
     << "Title\n"
     << "Salary\n"
     << "Month\n"
     << "Day\n"
     << "Year\n"
     << "-------------------------\n\n";

cin >> emp1;

cout << "\nHere is the new Employee information:\n";
cout << emp1; 

return 0;
}