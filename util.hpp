#ifndef __UTIL_H__
#define __UTIL_H__

#include <string>
#include <vector>

std::vector<std::string> split(std::string haystack, std::string needle) {
  //std::cout << "Needle: " << needle << std::endl;
  std::vector<std::string> results = std::vector<std::string>();
  std::string item;
  size_t needle_length = needle.size();
  //std::cout << "Needle_length: " << needle_length << std::endl;
  size_t found = haystack.find(needle);
  size_t prev = 0;
  while(found != std::string::npos) {
    //std::cout << "Found: "<< found << std::endl;
    size_t left;
    size_t right;
    if(prev == 0) {
      item = haystack.substr(prev,found-prev);
    }else{
      item = haystack.substr(prev+needle_length,found-(prev+needle_length));
    }
    //std::cout << "Item " << item <<" left "<< left << " right  " << right  << std::endl;
    if(found != std::string::npos) 
      prev = found;
    found = haystack.find(needle,found+needle_length);
    results.push_back(item);
  }
  if(prev==0) {
    results.push_back(haystack.substr(prev));
  }else{
    results.push_back(haystack.substr(prev+needle_length));
  }
  return results;
}


#endif
