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

    std::string name;

    int id;
    int current_magic;
    //int game_ranking;
    //int stock

    Library* library;
    Deck* active_deck;
};

#endif
