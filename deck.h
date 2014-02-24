#pragma once
#include "card.h"

class Deck {
public:	
	void shuffle();
	void addCard(Card card, int count = 1);
	void removeCard(Card card, int count = 1);
	int hasCard(Card card);
	int size();
	bool validate();
};