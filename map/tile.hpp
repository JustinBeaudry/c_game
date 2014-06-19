#ifndef __TILE_H__
#define __TILE_H__

#include <vector>

//===============================
//  Forward declared dependencies
//===============================  
//class Monster;
//class Player;
//class Status;
//class Type;
//class Zone;

//============
//  Tile Class
//============
class Tile {
  public:
    //Monster* monster;
    //std::vector< Player* > players;
    //Status* status;
    //Type* type;
    //Zone* zone;
    std::string type;
    const int id;
    int value;
    int level;

    Tile(int,std::string);
  
    friend std::ostream& operator<< (std::ostream& os, const Tile& tile);
};

Tile::Tile(int id, std::string type):id(id),type(type) {
  value = 100;
  level = 1;
}


std::ostream& operator<< (std::ostream& os, const Tile& tile) {
  os << tile.id << " " << tile.level << " " << tile.value << std::endl;
  return os;
}
#endif
