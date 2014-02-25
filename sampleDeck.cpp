#include "sampleDeck.h"
#include "terrainCard.h"
#include "spellCard.h"

SampleDeck::SampleDeck() {
	Card* card = new TerrainCard(RED);
	addCard(*card);
	delete card;
}