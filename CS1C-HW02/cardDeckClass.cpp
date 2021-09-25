
/****************************************************************************************
* AUTHOR	 : Sierra Martin
* STUDENT ID : 1130942
* HW NAME    : Deck of Cards
* CLASS      : CS1C
* SECTION    : T-TH 12:30p - 2:50p
* DUE DATE   : 09/02/2021 *Late*
****************************************************************************************/
#include "cardDeckClass.h"

Deck::Deck(){}; // default constructor
Deck::~Deck(){}; // default destructor 

/***************************************************************************************
*
* shuffleDeck : Class Deck
*_______________________________________________________________________________________
* This function is responsible for creating a "perfect shuffle." This means that the deck
* is broken exactly in half and rearranged so that the first card is followed by the 27th
* card, followed by the second card, followed by the 28th, and so on. 
*_______________________________________________________________________________________
*	shuffle will be performed on the ies of the deck object. 
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
	// inputting the top cards into the odd ies of the array 
	for (int i = 0; i < DECK_SIZE / 2; i++)
	{
		deckofCards[i * 2 + 1].cardsuit = topHalf[i].cardsuit;
		deckofCards[i * 2 + 1].cardface = topHalf[i].cardface;
	}
/*_______________________________________________________________________*/
	// inputting the bottom cards into the even ies of the array 
	for (int i = 0; i < DECK_SIZE / 2; i++)
	{
		deckofCards[i * 2].cardsuit = bottomHalf[i].cardsuit;
		deckofCards[i * 2].cardface = bottomHalf[i].cardface;
	}
}

/***************************************************************************************
*
* makeDeck : Class Deck
*_______________________________________________________________________________________
* This function is responsible for initializing the ies of the deckofCards array
* with suits and faces of each card 
****************************************************************************************/
void Deck::makeDeck()
{
	for (int i = 0; i < DECK_SIZE; i++)
    {
        int suit = i / 13;
        int face = i % 13;

        deckofCards[i].cardsuit = Suit(suit);
        deckofCards[i].cardface = Face(face);
    }
}

/***************************************************************************************
*
* printDeck : Class Deck
*_______________________________________________________________________________________
* This function is responsible for printing out each card from the deck.
****************************************************************************************/
void Deck::printDeck()
{
	for (auto & i : deckofCards)
    {
		/*_______________________________________________________________________*/
        // Determines which Face to print to the console. 
        switch(i.cardface)
        {
            case TWO:   cout << "Two of ";
            break;
            case THREE: cout << "Three of ";
            break;
            case FOUR:  cout << "Four of ";
            break;
            case FIVE:  cout << "Five of ";
            break;
            case SIX:   cout << "Six of ";
            break;
            case SEVEN: cout << "Seven of ";
            break;
            case EIGHT: cout << "Eight of ";
            break;
            case NINE:  cout << "Nine of ";
            break;
            case TEN:   cout << "Ten of ";
            break;
			case ACE:   cout << "Ace of ";
            break;
            case JACK:  cout << "Jack of ";
            break;
            case QUEEN: cout << "Queen of ";
            break;
            case KING:  cout << "King of ";
            break;
        }
		/*_______________________________________________________________________*/
        // Determines which Suit to print to the console. 
        switch(i.cardsuit)
        {
            case CLUBS   : cout << "Clubs";
            break;
            case DIAMONDS: cout << "Diamonds";
            break;
            case HEARTS  : cout << "Hearts";
            break;
            case SPADES  : cout << "Spades";
            break;
        }
        cout << endl;
    }
    cout << endl << endl;
}

/***************************************
* Overloaded operator '==':
	Overloads the == operator so that we may compare two 
	deck objects.
***************************************/
bool Deck::operator == (const Deck &Deck2)
{
    for (int i = 0; i < DECK_SIZE; i++)
    {
		// if the faces and suits of both decks are not equal, return false
        if(this->deckofCards[i].cardsuit != Deck2.deckofCards[i].cardsuit ||
           this->deckofCards[i].cardface != Deck2.deckofCards[i].cardface)
        {
            return false;
        }
    }
    return true;	// elese return true 
}