#include "deck.h"
#include "player.h"

enum phaseType { BEGINNING, MAIN1, COMBAT, MAIN2, ENDING };

class Game {
	Game(Player* player1, Player* player2);
	int turn();
	bool start();
private:
	int _turn;
	phaseType _phase;
	Deck* _battlefield;
	Deck* _exile;
	Deck* _stack;
	Player* _player1;
	Player* _player2;
	std::list<Player*> _players;
};