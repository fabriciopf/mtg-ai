#include "player.h"

Player::Player(Deck* deck) : _deck(deck) {

}

Deck* Player::deck() {
	return _deck;
}

Deck* Player::cemetery() {
	return _cemetery;
}