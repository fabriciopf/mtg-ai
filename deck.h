#pragma once
#include "card.h"
#include <list>

class Deck {
public:
	void shuffle();
	void addCard(Card* card, int count = 1);
	void removeCard(const Card& card);
	int hasCard(Card* card);
	int size();
	bool isValid();
	void swap(*Deck deck);
private:
	std::list<Card*> _cards;
};