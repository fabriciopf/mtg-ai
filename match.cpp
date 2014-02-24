#include "match.h"

Match::Match(Player* p1, Player* p2) : _player1(p1), _player2(p2), _result(NOT_STARTED) {

}

eMatchResult Match::start() {
	setResult(NOT_FINISHED);

	// Validate decks
	if (!player1->deck()->isValid() || !player2->deck()->isValid()) {
		setResult(INVALID_DECK);
	} else {
		// Run simulation
		setResult(DRAW);
	}

	return result();
}

void Match::setResult(eMatchResult result) {
	_result = result;
}

Player* Match::player1() {
	return player1;
}

Player* Match::player2) {
	return player2;
}

int Match::result() {
	return _result;
}