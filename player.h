#include "deck.h"

class Player {
public:
	Player(Deck* deck);
	Deck* deck();
	Deck* cemetery();
private:	
	Deck* _deck;
	Deck* _cemetery;
};