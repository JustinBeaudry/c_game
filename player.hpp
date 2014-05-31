#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>

//===============================
//  Forward declared dependencies
//===============================  
class Library;
class Deck;

//===============
//  Player Class
//===============
class Player {
  public:
    int id;
    std::string name;
    int current_magic;
    Library* library;
    Deck* active_deck;
};

#endif
