#ifndef __MONSTER_H__
#define __MONSTER_H__

#include <vector>
#include "token.hpp"

class Monster : public Token {
  public:
    std::string name;

    int id;
    int mhp;
    int hp;
    int str;
}
