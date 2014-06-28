#ifndef __MAP_H__
#define __MAP_H__

#include <vector>
#include <string>
#include "ngraph.hpp"
#include "../../JuceLibraryCode/JuceHeader.h"
//===============================
//  Forward declared dependencies
//===============================  
class Tile;
class Graph;

class GameMap {
  public:
    int id;
    String name;

    NGraph::Graph* map_graph;
    // a vector list of all the tiles, the index is the graph id
    Array< Tile*> tiles;
    //std::vector< Zone* > zones;

    GameMap(String mapname);
    ~GameMap(void);
    
};

#endif
