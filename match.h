#include "player.h"
#include "game.h"

enum matchResult { NOT_STARTED, NOT_FINISHED, INVALID_DECK, PLAYER1_VICTORY, PLAYER2_VICTORY, DRAW};

class Match {
public:	
	Match(Player* p1, Player* p2);
	matchResult start();
	Player* player1();
	Player* player2();
	matchResult result();
protected:
	void setResult(matchResult result);
private:
	Player* _player1;
	Player* _player2;
	matchResult _result;
	std::list<Game> _games;
};