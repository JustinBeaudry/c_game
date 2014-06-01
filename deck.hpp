#ifndef __DECK_H__
#define __DECK_H__

#include <vector>

//===============================
//  Forward declared dependencies
//===============================  
class Card;

//===========
// Deck Class
//===========
class Deck {
  public:
    std::vector< Card* > cards; 
    
    // a vector of ids 
    std::vector<int> in_hand;
    std::vector<int> discard;
    std::vector<int> banished;

    int checkCardCount(Card* cards);
    int checkCardLimit(Card* cards);
}

#endif
