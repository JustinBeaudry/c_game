#ifndef __TOKEN_H__
#define __TOKEN_H__

//=============
//  Token Class
//=============
class Token {
  public:
    virtual void move() {
      //  requires access to MapGraph
    };
    virtual void teleport() {
      //  requires access to MapGraph
    };
    int current_tile;
    int previous_tile;
}

#endif
