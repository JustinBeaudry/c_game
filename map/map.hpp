#ifndef __MAP_H__
#define __MAP_H__

#include <vector>
#include <string>

//===============================
//  Forward declared dependencies
//===============================  
class Tile;
class MapGraph;
class Graph;

class Map {
  public:
    const int id;
    std::string name;

    Graph* map_graph;
    // a vector list of all the tiles, the index is the graph id
    std::vector< Tile*> tiles;
    std::vector< Zone* > zones;
}

    Map(std::string mapname);
    ~Map(void);
    
};

#endif
