#include "SoftwareArchitect.h"
#include "Employee.h"

// === Default constructor =============================
Software::Software()
{
    depNum = 0;
    supervisor = "";
    percentSal = 0.00;
    years = 0;
}
//--------------------------------
// === Overloaded constructor ==========================
// Values passed as arguments from main() are assigned to an object's data members
//--------------------------------
Software::Software(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year, int depNum, string supervisor, double percentSal, int years)
{
    ob.setEmployee(name, ID, phone, age, gender, title, salary, month, day, year);
    this->depNum = depNum;
    this->supervisor = supervisor;
    this->percentSal = percentSal;
    this->years = years;
}
//--------------------------------
// === Destructor ======================================
//--------------------------------
Software::~Software(){} // destructor

/***************************************************************************************
*
* Mutator functions 
*_______________________________________________________________________________________
* These functions take arguments passed from main and insert them as values for the object's
* data members. One large set function to set everything at once, or mutiple set functions
* in case the user wishes to set individual values for a single object. 
*_______________________________________________________________________________________
****************************************************************************************/

void Software::setSoftware(int depNum, string supervisor, double percentSal, int years)
{
    this->depNum = depNum;
    this->supervisor = supervisor;
    this->percentSal = percentSal;
    this->years = years;
}
//--------------------------------

void Software::setTotal(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year)
{
    ob.setEmployee(name, ID, phone, age, gender, title, salary, month, day, year);
}

void Software::setDepNum(int depNum)
{
    this->depNum = depNum;
}
//--------------------------------

void Software::setSupervisor(string supervisor)
{
    this->supervisor = supervisor;
}
//--------------------------------

void Software::setPercentSal(double percentSal)
{
    this->percentSal = percentSal;
}
//--------------------------------

void Software::setYears(int years)
{
    this->years = years;
}
//--------------------------------

/***************************************************************************************
*
* Method Print 
*_______________________________________________________________________________________
* This function is responsible for printing the data values held by a class object
*_______________________________________________________________________________________
****************************************************************************************/
void Software::print()
{
    ob.print();
    cout << "Department :   " << depNum << endl
         << "Supervisor :   " << supervisor << endl
         << "Raise %    :   " << percentSal << endl
         << "Experience :   " << years << " years" << endl
         << "===============================\n";
}
//--------------------------------
