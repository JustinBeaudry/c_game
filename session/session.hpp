#ifndef __GAME_SESSION_H__
#define __GAME_SESSION_H__

class Player;
class GameMap;

#include <vector>
class GameSession {
  public:
    int session_id;
    int random_seed;
    std::vector< Player* > players;
    GameMap* map;

    void addPlayer(Player* player); //we might change these to return some sort of success/error info
    void setMap(GameMap*);
    
};

#endif
