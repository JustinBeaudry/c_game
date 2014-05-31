#ifndef __LIBRARY_H__
#define __LIBRARY_H__

#include <vector>

//===============================
//  Forward declared dependencies
//===============================  
class Deck;

//===============
//  Library Class
//===============
class Library {
  public:
    std::vector< Deck* > decks;

    // @TODO:  more properties?

    // give Deck ID, return Deck
    Deck* selectActiveDeck(int);
};

#endif
