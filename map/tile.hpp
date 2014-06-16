#ifndef __TILE_H__
#define __TILE_H__

#include <vector>

//===============================
//  Forward declared dependencies
//===============================  
class Monster;
class Player;
class Status;
class TileType;
class Zone;

//============
//  Tile Class
//============
class Tile {
  public:
    const int id;
    Monster* monster;
    std::vector< Player* > players;
    Status* status;
    TileType* type;
    Zone* zone;
    int value;
    int level;
};

#endif
