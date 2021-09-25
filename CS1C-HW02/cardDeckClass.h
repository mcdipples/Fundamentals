/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : Deck of Cards
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 09/02/2021 *Late*
****************************************************************************************/
#ifndef cardDeckClass_H
#define cardDeckClass_H

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
	// Card struct, represents one singular card to be stored in the deck array. 
	struct card
	{
		// Suit and face of a single card 
		Suit cardsuit;
		Face cardface; 
	};
	card deckofCards[DECK_SIZE]; // Array we will be storing each card into
};

#endif