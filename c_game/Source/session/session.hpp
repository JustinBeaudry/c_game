#ifndef __GAME_SESSION_H__
#define __GAME_SESSION_H__
#include "../JuceLibraryCode/JuceHeader.h"
class Player;
class GameMap;

#include <vector>
class GameSession {
  public:
    int session_id;
    int random_seed;
    Random rand;
    int round;
    //std::vector< battleEffects> global_battle_effects
    //std::vector< > global_effects
    int turn;
    
    OwnedArray<Player> players;
    GameMap* map;

    GameSession(void);
    void addPlayer(Player* player); //we might change these to return some sort of success/error info
    void setMap(GameMap*);
    
};

#endif
