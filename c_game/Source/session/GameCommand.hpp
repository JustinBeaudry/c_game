//
//  GameCommand.hpp
//  c_game
//
//  Created by Aaron@home on 6/22/14.
//
//

#ifndef c_game_GameCommand_hpp
#define c_game_GameCommand_hpp

class GameSession;

class GameCommand {
public:
  virtual void execute(GameSession* world) = 0;
};


#endif
