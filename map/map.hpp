#ifndef __MAP_H__
#define __MAP_H__

#include <vector>
#include <string>

//===============================
//  Forward declared dependencies
//===============================  
class Tile;
class MapGraph;

class Map {
  public:
    const int id;
    std::string name;

    MapGraph* map_graph;
    // a vector list of all the tiles, the index is the graph id
    std::vector< Tile*> tiles;
}

#endif
