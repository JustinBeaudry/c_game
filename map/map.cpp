#include "map.hpp"
#include "ngraph.hpp"
#include "tile.h"
#include <iostream>
#include <fstream>
#include <string>

Map::~Map(void) { }

Map::Map(const char* mapname) {

  std::ifstream infile;
  infile.open(mapname);
  
  

}
