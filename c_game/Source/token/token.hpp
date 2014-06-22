#ifndef __TOKEN_H__
#define __TOKEN_H__

//===============================
//  Forward declared dependencies
//===============================
class Map;
class Player;

//=============
//  Token Class
//=============
class Token {
  public:
    int current_tile;
    int previous_tile;
    virtual void move(Player *player, Map *map, int x) {
      //map->map_graph.walk(current_tile, x);
      // there needs to be some way for this to add each tile that the position
      // funcion is going to walk over to the visited_tiles vector
      //player->visited_tiles.push_back(current_tile);
    };
    virtual void teleport(Map *map, int x) {
     // map.map_graph.position(current_tile, x);
    };
    Token();
    virtual ~Token();
};

#endif
