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

  //std::ifstream infile;
  //infile.open(mapname.c_str());
  //getline(infile,name);
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
    
  }
  /*
  while(!infile.eof()) {
    vector<string> parts = split(tile_def,"\t");
    int id;
    istringstream(parts[0]) >> id;
    string tile_type = parts[1];

    vector<string> connections = split(parts[2],",");
    vector<string>::iterator it; 
    for(it = connections.begin(); it != connections.end(); it++) {
      int cid;
      istringstream(*it) >> cid;
      map_graph->insert_edge(id,cid);
    }
    Tile* cur_tile = new Tile(id, tile_type);
    tiles.push_back(cur_tile); 
    cout << *cur_tile;
    getline(infile,tile_def);
  }
  */

}

//int main(int argc, char** argv) {
//  Map test = Map(string("./map1.txt"));
//}; 
