/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : Deck of Cards
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 09/02/2021 *Late*
****************************************************************************************/
#ifndef cardDeckHeader_H
#define cardDeckHeader_H

#include <iostream>
#include <string>
using namespace std; 

// Constant int DECK_SIZE, for the array index holding the deck of card objects. 
static const int DECK_SIZE = 52;

class Deck{
public:
	Deck(); // default constructor
	~Deck(); // default destructor 

/***************************************
*  shuffleDeck: 
	Performs a "perfect shuffle" of the cards within the deck. 
***************************************/
	void shuffleDeck();

/***************************************
* makeDeck: 
	Initializes deck
***************************************/
	void makeDeck();

/***************************************
* printDeck: 
	Prints out deck 
***************************************/
	void printDeck();

/***************************************
* Overloaded operator '==':
	Overloads the == operator so that we may compare two 
	deck objects.
***************************************/
	bool operator == (Deck const& secondDeck);

private:
	// Suit and faces of each card
	enum Suit { HEARTS, CLUBS, SPADES, DIAMONDS };
	enum Face {
		TWO, THREE, FOUR, FIVE, SIX, SEVEN,
		EIGHT, NINE, TEN, ACE, KING, QUEEN, JACK
	};

	struct card
	{
		// Suit and face of a single card 
		Suit cardsuit;
		Face cardface; 
	};
	card deckofCards[DECK_SIZE]; // Array we will be storing each card into
}
/*
 maybe for shuffling vector, i can take the evens and the odds?
 split deck in half (52 cards, half = 26)
 first card in half 1 is followed by first card in half 2, second card half 1 followed by second card half 2, etc. 

	 3 operations: pull (store to variable), erase (remove from vector), and insert (push into vector at specified location)
	 pull: a = myVector[i]
	 pull from index[26 + i] *starts at i = 0
	 erase that index 
	 insert pulled value (a) into vector.begin() + ((i*2)+1) *inserts into 0+1
		i++
*/

#endif