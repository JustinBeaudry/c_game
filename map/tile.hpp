#ifndef __TILE_H__
#define __TILE_H__

#include <vector>

//===============================
//  Forward declared dependencies
//===============================  
class Monster;
class Player;
class Status;
class Zone;

//============
//  Tile Class
//============
class Tile {
  public:
    Monster* monster;
    std::vector< Player* > players;
    Status* status;
    Type* type;
    Zone* zone;
    const int id;
    int value;
    int level;
}

#endif
