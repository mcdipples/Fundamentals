
/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : Deck of Cards
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 09/02/2021 *Late*
****************************************************************************************/
#include "cardDeckHeader.h"

Deck::Deck(); // default constructor
Deck::~Deck(); // default destructor 

/***************************************************************************************
*
* Method shuffleDeck : Class cardDeckClass
*_______________________________________________________________________________________
* This function is responsible for creating a "perfect shuffle." This means that the deck
* is broken exactly in half and rearranged so that the first card is followed by the 27th
* card, followed by the second card, followed by the 28th, and so on. 
*_______________________________________________________________________________________
* PRE CONDITIONS: 
*	obj deckofCards
* 
* POST CONDITIONS:
*	shuffle will be performed
****************************************************************************************/
void Deck::shuffleDeck() {

	card topHalf[DECK_SIZE / 2]; // First half of the card deck is stored here. 
	card bottomHalf[DECK_SIZE / 2]; // Second half of the deck is stored here. 

	// splitting the deckofCards array into the two new arrays.
	for (int i = 0; i < DECK_SIZE / 2; i++)
	{
		topHalf[i] = deckofCards[i + 26];
		bottomHalf[i] = deckofCards[i];
	}
/*_______________________________________________________________________*/
	// inputting the top cards into the odd indexes of the array 
	for (int i = 0; i < DECK_SIZE / 2; i++)
	{
		deckofCards[i * 2 + 1].cardsuit = topHalf[i].cardsuit;
		deckofCards[i * 2 + 1].cardface = topHalf[i].cardface;
	}
/*_______________________________________________________________________*/
	// inputting the bottom cards into the even indexes of the array 
	for (int i = 0; i < DECK_SIZE / 2; i++)
	{
		deckofCards[i * 2].cardsuit = bottomHalf[i].cardsuit;
		deckofCards[i * 2].cardface = bottomHalf[i].cardface;
	}
}

