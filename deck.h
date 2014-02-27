#pragma once
#include "card.h"

class Deck {
public:
	void shuffle();
	void addCard(Card* card, int count = 1);
	void removeCard(const Card& card);
	int hasCard(Card* card);
	int size();
	bool isValid();
private:
	std::list<Card*> _cards;
};