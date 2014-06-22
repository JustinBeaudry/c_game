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
class MapGraph;
class Graph;

class Map {
  public:
    int id;
    String name;

    NGraph::Graph* map_graph;
    // a vector list of all the tiles, the index is the graph id
    std::vector< Tile*> tiles;
    //std::vector< Zone* > zones;

    Map(String mapname);
    ~Map(void);
    
};

#endif
