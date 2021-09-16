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

/****************************************************************************************
* void Employee::setEmployee:
* _______________________________________________________________________________________
* Pull values passed as arguments from main and assign them to the object's data members 
* _______________________________________________________________________________________
* 
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

/****************************************************************************************
* void Employee::setName:
* _______________________________________________________________________________________
* Pull string name value passed as an argument from main and assigns it to the object's 
* name data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setName(string name)
{
    this->name = name;
}
//--------------------------------

/****************************************************************************************
* void Employee::setID:
* _______________________________________________________________________________________
* Pull int ID value passed as an argument from main and assigns it to the object's 
* ID data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setID(int ID)
{
    this->ID = ID;
}
//--------------------------------

/****************************************************************************************
* void Employee::setPhone:
* _______________________________________________________________________________________
* Pull string phone value passed as an argument from main and assigns it to the object's 
* phone data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setPhone(string phone)
{
    this->phone = phone;
}
//--------------------------------

/****************************************************************************************
* void Employee::setAge:
* _______________________________________________________________________________________
* Pull int age value passed as an argument from main and assigns it to the object's 
* phone data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setAge(int age)
{
    this->age = age;
}
//--------------------------------

/****************************************************************************************
* void Employee::setGender:
* _______________________________________________________________________________________
* Pull char gender value passed as an argument from main and assigns it to the object's 
* gender data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setGender(char gender)
{
        this->gender = gender;
}
//--------------------------------

/****************************************************************************************
* void Employee::setTitle:
* _______________________________________________________________________________________
* Pull string title value passed as an argument from main and assigns it to the object's 
* title data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setTitle(string title)
{
        this->title = title; 
}
//--------------------------------

/****************************************************************************************
* void Employee::setSalary:
* _______________________________________________________________________________________
* Pull string salary value passed as an argument from main and assigns it to the object's 
* salary data member 
* _______________________________________________________________________________________
*
****************************************************************************************/
void Employee::setSalary(string salary)
{
        this->salary = salary;
}
//--------------------------------

/****************************************************************************************
* void Employee::setHireDate:
* _______________________________________________________________________________________
* Pull values passed as arguments from main and assign them to the object's data members.
* Uses the setHireDate function from the Date class to set values that are part of 
* the Date class into an Employee object's data members. 
* _______________________________________________________________________________________
* Data members used from Data class: int month, int day, int year
****************************************************************************************/
void Employee::setHireDate(int month, int day, int year)
{
    this->hireDate.setDate(month, day, year);
}
//--------------------------------

/***************************************************************************************
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