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

/****************************************************************************************
* bool operator ==:
* _______________________________________________________________________________________
* Operator overload "==" so that we can compare the phone numbers of two Employee
* class objects. 
* True = phone numbers are the same
* False = phone numbers are different
* _______________________________________________________________________________________
* Used by phoneComp 
****************************************************************************************/
bool Employee::operator == (const Employee& Employee1) const
{
    return this->phone == Employee1.phone;
}

bool phoneComp(const Employee& employee1, const Employee& employee2)
{
    return employee1.phone == employee2.phone;
}

/****************************************************************************************
* Employee& operator + :
* _______________________________________________________________________________________
* Operator overload "+" so that we can add an integer to the age of an Employee object.  
****************************************************************************************/
Employee& Employee::operator += (const int& add)
{
    this->age += add;
    return *this;
}

/****************************************************************************************
* friend ostream& operator << :
* _______________________________________________________________________________________
* Operator overload "<<" so that we can print an Employee object to the console.  
****************************************************************************************/
ostream& operator << (ostream& os, const Employee& Employee2)
{
    os << "===============================\n"
         << "Employee :   " << Employee2.name << endl
         << "ID       :   " << Employee2.ID << endl
         << "Age      :   " << Employee2.age << endl
         << "Phone #  :   " << Employee2.phone << endl
         << "Gender   :   " << Employee2.gender << endl
         << "Title    :   " << Employee2.title << endl
         << "Salary   :   " << Employee2.salary << endl
         << "Hire Date:   "; 
    os << Employee2.hireDate;        // Need to overload ostream operator in Date as well so we can print hireDate data. 
    os << "\n===============================\n";

    return os;
}

/****************************************************************************************
* friend istream& operator >> :
* _______________________________________________________________________________________
* Operator overload ">>" so that we can input Employee object data values from the 
* console itself.  
****************************************************************************************/
istream& operator >> (istream& is, Employee& Employee2)
{
//============================================================
// variables that make up an Employee object. These will be passed to the Employee object  
    string name;
    int ID;
    string phone;
    int age;
    char gender;
    string title;
    string salary;
    int month;
    int day;
    int year;
//============================================================
// Inputting the values to be passed to the class object. 
    getline(is,name);
    is >> ID; 
    is.ignore(10000, '\n');
    getline(is, phone);
    is >> age;
    is.ignore(10000, '\n');
    is.get(gender);
    is.ignore(10000, '\n');
    getline(is, title);
    getline(is, salary);
    is >> month;
    is >> day;
    is >> year;

//============================================================
// Set these values we just inputted into the Employee object

    Employee2.setEmployee(name, ID, phone, age, gender, title, salary, month, day, year);

    return is;
} 





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
         << "Age      :   " << age << endl
         << "Phone #  :   " << phone << endl
         << "Gender   :   " << gender << endl
         << "Title    :   " << title << endl
         << "Salary   :   " << salary << endl
         << "Hire Date:   "; 
         hireDate.printDate();
    cout << "\n===============================\n";

}