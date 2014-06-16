#ifndef __TOKEN_H__
#define __TOKEN_H__

//=============
//  Token Class
//=============
class Token {
  public:
    virtual void move() {};
    virtual void teleport() {};
    int current_tile;
    int previous_tile;
}

#endif

