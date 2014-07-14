#include "map.hpp"
#include "ngraph.hpp"
#include "tile.hpp"
//#include "../util.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "../JuceLibraryCode/JuceHeader.h"

using namespace std;

GameMap::~GameMap(void) { }

GameMap::GameMap(String mapname) {


  File infile = File(mapname);
  StringArray map_lines = StringArray();
  infile.readLines(map_lines);
  map_graph = new NGraph::Graph;
  map_graph->set_undirected();


  for (String* lines = map_lines.begin(); lines!=map_lines.end(); lines++) {
    if(lines == map_lines.begin())
      name = *lines;
    StringArray tile_def = StringArray();
    tile_def.addTokens(*lines, "\t","");
    int id = tile_def[0].getIntValue();
    String tile_type = tile_def[1];
    StringArray connections = StringArray();
    connections.addTokens(tile_def[2],",","");
    for(String* node = connections.begin(); node!=connections.end(); node++) {
      map_graph->insert_edge(id, node->getIntValue());
    }
    
    Tile* cur_tile = new Tile(id, tile_type);
    tiles.add(cur_tile);
    cout << *cur_tile;
  }

}


