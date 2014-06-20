#ifndef __MAP_H__
#define __MAP_H__

#include <vector>
#include <string>
#include "ngraph.hpp"

//===============================
//  Forward declared dependencies
//===============================  
class Tile;
class MapGraph;
class Graph;

class Map {
  public:
    int id;
    std::string name;

    NGraph::Graph* map_graph;
    // a vector list of all the tiles, the index is the graph id
    std::vector< Tile*> tiles;
    std::vector< Zone* > zones;

    Map(std::string mapname);
    ~Map(void);
    
};

#endif
