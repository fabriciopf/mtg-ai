#pragma once
#include "deck.h"

class Player {
public:
	Player(Deck* deck);
	Deck* deck();
	Deck* graveyard();
	void setLibrary(Deck* deck);
	int life();
private:	
	Deck* _deck;
	Deck* _sideboard;
	Deck* _graveyard;
	Deck* _library;
	Deck* _hand;
	int _life;
};