#pragma once

enum cardType { TERRAIN_TYPE, SPELL_TYPE };

class Card {
public:
	Card(cardType type);
	cardType type();
private:
	cardType _type;
};