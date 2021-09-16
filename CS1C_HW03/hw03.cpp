#include "Employee.h"
#include "Date.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"
#include <iostream>
#include <string>

/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 03
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/14/2021
****************************************************************************************/

int main()
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

cout << "Starting: before modifications\n\n";

/*============================================================================
Instantiating and setting Employee class objects
============================================================================*/
Employee emp1;      // Default constructor, will need to use set methods to insert data values
Employee emp2("Stephan Colbert", 12346, "310-555-5555", 51, 'M', "Comedian", "$70,123", 5, 8, 2015);
emp1.setEmployee("James Corden", 87654, "703-703-1234", 37, 'M', "Talk Show Host", "$900,000", 12, 25, 2014);

// Print function, prints out the values stored in the Employee class objects
emp1.print();
emp2.print();

/*============================================================================
Instantiating and setting Programmer class objects
============================================================================*/
Programmer prog1;   // Default constructor, will need to use set methods to insert data values
Programmer prog2(5432122, "Joe Boss", "Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", "$223,000", 12, 24, 2011, 4.00, "Yes", "No");
prog1.setProgrammer(6543222, "Mary Leader", 7.00, "Yes", "Yes");
prog1.setTotal("Mary Coder", 65432, "310-555-5555", 28, 'F', "Programmer", "$770,123", 2, 8, 2010);

// Print function, prints out the values stored in the Programmer class objects
prog1.print();
prog2.print();

/*============================================================================
Instantiating and setting Software Architect class objects
============================================================================*/
Software sa1;       // Default constructor, will need to use set methods to insert data values
Software sa2("Alex Arch", 88888, "819-123-444", 31, 'M', "Architect", "$323,000", 12, 24, 2009, 5434222, "Big Boss", 5.00, 4);
sa1.setSoftware(6543422, "Big Boss", 8.00, 11);
sa1.setTotal("Sally Designer", 87878, "310-555-8888", 38, 'F', "Architect", "$870,123", 2, 8, 2003);

// Print function, prints out the values stored in the Programmer class objects
sa1.print();
sa2.print();

/*============================================================================
Making some changes to the data values within the existing class objects. 
Just changing some random values using the "set" functions in respect to the
object to . 
============================================================================*/
// == Employee objects ===================
emp1.setID(78945);          
emp2.setName("Joe Jonas");

// == Programmer objects =================
prog1.setDepNum(1234567);
prog2.setCpp("No");

// == Architect objects ==================
sa1.setPhone("494-789-8888");
sa2.setYears(1);

/*============================================================================
Now that we have made some changes to these data values, we will re-print
each of these objects. 
============================================================================*/
cout << "After making some changes to the data members,\n here are the new objects:\n\n";
emp1.print();
emp2.print();
prog1.print();
prog2.print();
sa1.print();
sa2.print();

return 0;
}


