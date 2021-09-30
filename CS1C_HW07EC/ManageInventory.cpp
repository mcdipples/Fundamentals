#include "ManageInventory.h"

/****************************************************************************************
* void ManageInventory::addItem:
* _______________________________________________________________________________________
* Uses new operator to dynamically create instances of type Item. Stores pointers to 
* invcentory items in the inventoryItems array. 
****************************************************************************************/
void ManageInventory::addItem(std::string name, int quantity, float cost)
{
    //Item* p;
    //p = new Item{name, quantity, cost};

    p_pInventoryItems[count] = new Item{name, quantity, cost};         // Next item on list is added 

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
    for (int i = 0; i < count; i++)
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
    std::cout << std::left;
    std::cout << std::setw(30) << "NAME" << std::setw(10) << "COST" << std::setw(10) << "QUANTITY\n";
    std::cout << "==================================================\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << std::left;
        std::cout << std::setw(30) << p_pInventoryItems[i]->name
             << std::setw(10) << p_pInventoryItems[i]->quantity << "$"
             << std::setw(7) << p_pInventoryItems[i]->cost << std::endl;
    }
}