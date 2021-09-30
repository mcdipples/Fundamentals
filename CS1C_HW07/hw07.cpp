/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 07
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/28/2021
=========================================================================================
* DESCRIPTION:
* This program uses dynamic arrays (using the new and delete operators) that allows a user
* to enter the names of athletic equipment. This will be used to keep inventory and generate
* reciepts from a user's purchase. 
*****************************************************************************************/
#include "ManageInventory.h"
using namespace Inventory;

int main()
{   
    std::string Name{""};
    int num{0};

    Purchase Items[purchase_size];
    ManageInventory inventory{5};
    
    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.addItem("Under Armour T-shirt", 33, 29.99);
    inventory.addItem("Brooks running shoes", 11, 111.44);
    inventory.addItem("Asics running shoes", 20, 165.88);
    inventory.addItem("Nike shorts", 77, 45.77);

    ManageInventory inventory2(inventory);  // using copy constructor to initialize a second inventory

    std::cout << "\nOriginal Inventory:\n"
              << "==================================================\n";
    inventory.printInventory();

    // names of 4 items are entered 
    std::cout << "\nName of items Mark would like to purchase (4 items):\n";
    for (int i = 0; i < purchase_size; i++ )
    {
        std::cout << "Item no " << i+1 << ":  ";
        std::getline(std::cin,Name);
        Items[i].name = Name; 
    }

    std::cout << std::endl;

    // qty of each item user would like to purchase
    for (int i = 0; i < purchase_size; i++ )
    {
        std::cout << "How many " << Items[i].name << "?:  ";
        std::cin >> num;
        Items[i].quantity = num;
    }

    std::cout << "\n==================================================\n\n"
              << "Printing reciept:\n"
              << "------------------------------------------------------\n";
    inventory.purchase(Items, 4);


    std::cout << "\nInventory after Mark's purchases:\n"
              << "==================================================\n";
    inventory.printInventory();

    std::cout << "\nCopy of original inventory using copy constructor:\n"
              << "==================================================\n";
    inventory2.printInventory();

    return 0;
}