#include "sampleDeck.h"
#include "land.h"
#include "spell.h"

SampleDeck::SampleDeck() {
	Card* card = new Land(RED, "Foo");
	addCard(card);
	delete card;
}