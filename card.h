#pragma once
#include <list>

enum cardType { TERRAIN_TYPE, SPELL_TYPE };
enum cardColor { RED, BLUE, GREEN, WHITE, BLACK };

class Card {
public:
	Card(cardType type, cardColor color);
	Card(cardType type, std::list<cardColor> colors);
	cardType type();
	std::list<cardColor> colors();
	bool hasColor(cardColor color);
private:
	cardType _type;
	std::list<cardColor> _colors;
};