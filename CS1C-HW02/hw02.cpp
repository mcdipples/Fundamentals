/****************************************************************************************
* AUTHOR	 : Sierra Martin 
* STUDENT ID : 1130942
* HW NAME    : Deck of Cards
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 09/02/2021 *Late*
****************************************************************************************/
#include "cardDeckClass.h"

int main()
{
    //  === Creating and initializing deck objects =====================
    Deck Deck1;
    Deck Deck2;

    Deck1.makeDeck();
    Deck2.makeDeck();

    // === Outputting the first deck before a shuffle is performed =====
    cout << "Deck before shuffling:\n";
    Deck1.printDeck();

    // === Outputting the first deck after first shuffle is performed ==
    Deck1.shuffleDeck();
    cout << "After a perfect shuffle:\n";
    Deck1.printDeck();
    
    // === Counting the number of shuffles required to return to original deck ==
    int i = 1;
    while (!(Deck1 == Deck2))
    {
        Deck1.shuffleDeck();
        i++;
    }
    cout << "Shuffles required to return to original:   " << i << endl;
    cout << "Here is the deck now that is back to its original:\n";

    Deck1.printDeck();
    
return 0;
}





