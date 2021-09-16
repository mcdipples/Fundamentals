#include "Programmer.h"

// === Default constructor =============================
Programmer::Programmer()
{
    depNum = 0;
    supervisor = "";
    percentSal = 0.00;
    cpp = "";
    java = "";
}
//--------------------------------
// === Overloaded constructor ==========================
// Values passed as arguments from main() are assigned to an object's data members
//--------------------------------
Programmer::Programmer(int depNum, string supervisor, string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year, double percentSal, string cpp, string java)
{
    ob.setEmployee(name, ID, phone, age, gender, title, salary, month, day, year);
    this->depNum = depNum;
    this->supervisor = supervisor;
    this->percentSal = percentSal;
    this->cpp = cpp;
    this->java = java;
}
//--------------------------------
// === Destructor ======================================
//--------------------------------
Programmer::~Programmer(){}
//--------------------------------

/***************************************************************************************
*
* Mutator functions 
*_______________________________________________________________________________________
* These functions take arguments passed from main and insert them as values for the object's
* data members. One large set function to set everything at once, or mutiple set functions
* in case the user wishes to set individual values for a single object. 
*_______________________________________________________________________________________
****************************************************************************************/

void Programmer::setProgrammer(int depNum, string supervisor, double percentSal, string cpp, string java)
{
    this->depNum = depNum;
    this->supervisor = supervisor;
    this->percentSal = percentSal;
    this->cpp = cpp;
    this->java = java;
}
//--------------------------------

void Programmer::setTotal(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year)
{
    ob.setEmployee(name, ID, phone, age, gender, title, salary, month, day, year);
}
//--------------------------------

void Programmer::setDepNum(int depNum)
{
    this->depNum = depNum;
}
//--------------------------------

void Programmer::setSupervisor(string supervisor)
{
    this->supervisor = supervisor;
}
//--------------------------------

void Programmer::setRaise(double percentSal)
{
    this->percentSal = percentSal;
}
//--------------------------------

void Programmer::setCpp(string cpp)
{
    this->cpp = cpp;
}
//--------------------------------

void Programmer::setJava(string java)
{
    this->java = java;
}
//--------------------------------

/***************************************************************************************
*
* Method Print 
*_______________________________________________________________________________________
* This function is responsible for printing the data values held by a class object
*_______________________________________________________________________________________
****************************************************************************************/

void Programmer::print()
{
    ob.print();
    cout << "Department :   " << depNum << endl
         << "Supervisor :   " << supervisor << endl
         << "Raise %    :   " << percentSal << endl
         << "C++        :   " << cpp << endl
         << "Java       :   " << java << endl
         << "===============================\n";
}
//--------------------------------