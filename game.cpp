#include "game.h"
#include <algorithm>

Game::Game(Player* player1, Player* player2) : _turn(1){
	_players.push_back(player1);
	_players.push_back(player2);
}

int Game::turn() {
	return _turn;
}

bool Game::start() {
	std::list<Player*>::iterator it = _players.begin();
	for (;it!=_players.end();it++) {
		*it->deck().shuffle();
		*it->setLibrary(*it->setLibrary(*it->deck());
	}
	
	std::random_shuffle(_players.begin(), _players.end());
	/* TODO: 
		
	*/

	return false;
}