#ifndef __ZONE_H__
#define __ZONE_H__

#include <vector>

//===============================
//  Forward declared dependencies
//===============================  
class Stock;

class Zone {
  public:  
    std::vector< Stock* > stocks;
    // a vector of tile ids
    std::vector<int> tile_ids; 

};

#endif
