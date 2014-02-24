#include "player.h"

enum eMatchResult { NOT_STARTED, NOT_FINISHED, INVALID_DECK, PLAYER1_VICTORY, PLAYER2_VICTORY, DRAW};

class Match {
public:	
	Match(Player* p1, Player* p2);
	eMatchResult start();
	Player* player1();
	Player* player2();
	eMatchResult result();
protected:
	void setResult(eMatchResult result);
private:
	Player* _player1;
	Player* _player2;
	eMatchResult _result;
};