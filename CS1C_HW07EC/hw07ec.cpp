#include "ManageInventory.h"
/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 07 - EXTRA CREDIT
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/28/2021
*****************************************************************************************
* PROGRAM:
* This is the extra credit for HW07. It creates a manageInventory object and adds five 
* items to the inventory. Output: items within inventory. 
*****************************************************************************************/
int main()
{
    ManageInventory inventory{5};

    inventory.addItem("Nike basketball shoes", 22, 145.99);
    inventory.addItem("Under Armour T-shirt", 33, 29.99);
    inventory.addItem("Brooks running shoes", 11, 111.44);
    inventory.addItem("Asics running shoes", 20, 165.88);
    inventory.addItem("Nike shorts", 77, 45.77);

    inventory.printInventory();


    return 0;
}