#include "player.h"

Player::Player(Deck* deck) : _deck(deck) {

}

Deck* Player::deck() {
	return _deck;
}

Deck* Player::graveyard() {
	return _graveyard;
}

int Player::life() {
	return _life;
}

void Player::setLibrary(Deck* deck) {
	_library->clear();
	_library->swap(deck);
}