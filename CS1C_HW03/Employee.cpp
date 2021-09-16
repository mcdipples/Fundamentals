#include "Employee.h"

// === Default constructor =============================
Employee::Employee()
{
    name = "";
    title = "";
    phone = "";
    ID = 0;
    age = 0;
    salary = "";
    hireDate.setDate(0,0,0);
}

//--------------------------------
// === Overloaded constructor ==========================
// Values passed as arguments from main() are assigned to an object's data members
//--------------------------------
Employee::Employee(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year)
{
    this->name = name;
    this->ID = ID;
    this->phone = phone;
    this->age = age;
    this->gender = gender;
    this->title = title; 
    this->salary = salary;
    this->hireDate.setDate(month, day, year);
}
//--------------------------------
// === Destructor ======================================
//--------------------------------
Employee::~Employee(){}
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

void Employee::setEmployee(string name, int ID, string phone, int age, char gender, string title, string salary, int month, int day, int year)
{
    this->name = name;
    this->ID = ID;
    this->phone = phone;
    this->age = age;
    this->gender = gender;
    this->title = title; 
    this->salary = salary;
    this->hireDate.setDate(month, day, year);
}
//--------------------------------

void Employee::setName(string name)
{
    this->name = name;
}
//--------------------------------

void Employee::setID(int ID)
{
    this->ID = ID;
}
//--------------------------------

void Employee::setPhone(string phone)
{
    this->phone = phone;
}
//--------------------------------

void Employee::setAge(int age)
{
    this->age = age;
}
//--------------------------------

void Employee::setGender(char gender)
{
        this->gender = gender;
}
//--------------------------------

void Employee::setTitle(string title)
{
        this->title = title; 
}

void Employee::setSalary(string salary)
{
        this->salary = salary;
}
//--------------------------------

void Employee::setHireDate(int month, int day, int year)
{
    this->hireDate.setDate(month, day, year);
}
//--------------------------------

/***************************************************************************************
*
* Method Print 
*_______________________________________________________________________________________
* This function is responsible for printing the data values held by a class object
*_______________________________________________________________________________________
****************************************************************************************/

void Employee::print()
{
    cout << "===============================\n"
         << "Employee :   " << name << endl
         << "ID       :   " << ID << endl
         << "Phone #  :   " << phone << endl
         << "Gender   :   " << gender << endl
         << "Title    :   " << title << endl
         << "Salary   :   " << salary << endl
         << "Hire Date:   "; 
         hireDate.printDate();
    cout << "\n===============================\n";

}