//
//  MovePlayer.hpp
//  c_game
//
//  Created by Aaron@home on 6/22/14.
//
//

#ifndef c_game_MovePlayer_hpp
#define c_game_MovePlayer_hpp
#include "GameCommand.hpp"
#include "../session/session.hpp"
class MovePlayer : GameCommand {
public:
  MovePlayer(Player* player);
  void execute(GameSession* world);
  ~MovePlayer();
  
  
};

#endif
