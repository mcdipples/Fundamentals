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
* receipts from a user's purchase.
*****************************************************************************************/
#include "ManageInventory.h"

int main()
{
    ManageInventory inventory{5};

    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.printInventory();

    return 0;
}