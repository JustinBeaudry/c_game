#ifndef __DECK_H__
#define __DECK_H__
#include "../JuceLibraryCode/JuceHeader.h"


//===============================
//  Forward declared dependencies
//===============================  
class Card;

//===========
// Deck Class
//===========
class Deck {
  public:
    Array< Card* > cards;
    Array< Card* > currentdeck;
    // a vector of ids
    Array<int> in_hand;
    Array<int> discard;
    Array<int> banished;

    int checkCardCount(Card* cards);
    int checkCardLimit(Card* cards);
    bool shuffleDeck(void);
};

#endif
