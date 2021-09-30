/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : HW 07
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 9/28/2021
****************************************************************************************/
#include "ManageInventory.h"

/****************************************************************************************
* void ManageInventory::addItem:
* _______________________________________________________________________________________
* Uses new operator to dynamically create instances of type Item. Stores pointers to
* invcentory items in the inventoryItems array.
****************************************************************************************/
void ManageInventory::addItem(string name, int quantity, float cost)
{
    Item* p;
    p = new Item{name, quantity, cost};

    p_pInventoryItems[count] = p;         // Next item on list is added

    count++;
}

/****************************************************************************************
* (DESTRUCTOR) ManageInventory::~ManageInventory:
* _______________________________________________________________________________________
* Uses delete operator to remove/free the heap from allocated memory used for the
* dynamically-allocated Item objects.
****************************************************************************************/
ManageInventory::~ManageInventory()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        delete p_pInventoryItems[i];        // frees the allocated memory
    }
    delete[] p_pInventoryItems;             // frees the block of allocated memory by deleting the array
}

/****************************************************************************************
* ManageInventory::printInventory:
* _______________________________________________________________________________________
* Prints the list of items within the Inventory.
****************************************************************************************/
void ManageInventory::printInventory() const
{
    cout << "ITEM NAME           QUANTITY           PRICE\n";
    for (int i = 0; i < count; i++)
    {
        cout << p_pInventoryItems[i]->name << "           "
        << p_pInventoryItems[i]->quantity << "           $"
        << p_pInventoryItems[i]->cost << endl;
    }
}
// create a function that decreases the quantity of the specified item each time it is purchased.
// check if item is available, if available, then subtract 1 from qty.

/*void ManageInventory::purchase()
{
    // need to get index number from main?
    p_pInventoryItems[i]->quantity -= 1;
}*/




