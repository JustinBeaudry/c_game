#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include <vector>
#include "token.hpp"

//===============================
//  Forward declared dependencies
//===============================
class Token;
class Library;
class Deck;
class Tile;

//==============
//  Player Class
//==============
class Player : public Token {
  public:
    std::string name;

    int id;
    int current_magic;
    std::vector< Tile* > visited_tiles;
    
    Library* library;
    Deck* active_deck;
};

#endif
