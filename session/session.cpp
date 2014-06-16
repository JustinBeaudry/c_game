#include "session.hpp";

GameSession::GameSession() {
  session_id  = 1;
  random_seed = 4; 

}

void GameSession::addPlayer(Player* player) {
  players.push_back(player);
}

void GameSession::setMap(GameMap * game_map) {
  map = game_map;
}

