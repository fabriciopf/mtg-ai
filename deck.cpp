#include "deck.h"
#include <algorithm>

void Deck::shuffle() {
	std::random_shuffle(_cards.begin(), _cards.end());
}

void Deck::addCard(Card* card, int count) {
	_cards.insert(_cards.end(), count, card);
}

void Deck::removeCard(const Card& card) {
	//TODO: _cards.remove(card);
}

int Deck::hasCard(Card* card) {
	//TODO: iterate all elements
	return 0;
}

int Deck::size() {
	return _cards.size();
}

bool Deck::isValid() {
	//TODO: verify minimum size, same card count and everything 
	return false;
}

void Deck::swap(Deck* deck) {
	_cards->swap(deck->cards());
}