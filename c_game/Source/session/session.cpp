#include "session.hpp"

GameSession::GameSession() {
  session_id  = 1;
  random_seed = 4;
  rand = Random(random_seed);
  std::cout << "Hell0 Juce!";

}

void GameSession::addPlayer(Player* player) {
  players.add(player);
}

void GameSession::setMap(GameMap * game_map) {
  map = game_map;
}

