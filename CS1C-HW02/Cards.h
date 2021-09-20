#ifndef CARDS_H_
#define CARDS_H_
#include <iostream>
using namespace std; 

class Card
{
public:
	enum Suit { HEARTS, CLUBS, SPADES, DIAMONDS };
	enum Face {	TWO, THREE, FOUR, FIVE, SIX, SEVEN,
				EIGHT, NINE, TEN, ACE, KING, QUEEN, JACK };

	// constructor with params 
	Card(Suit suit, Face face); 
	~Card();

	Suit getSuit();
	void setSuit(Suit suit);
	Face getFace();
	void setFace(Face face);
private: 
	Suit s;
	Face f;
};
#endif










// make your cards an enum, then make a variable with that enum data type in your class
//	Cards();	// default constructor, we won't need to use this but wanted to include

