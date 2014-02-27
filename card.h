#pragma once
#include <list>
#include <string>

enum cardType { ARTIFACT, CREATURE, ENCHANTMENT, INSTANT, LAND, PLANEWALKER, SORCERY };
enum colorType { RED, BLUE, GREEN, WHITE, BLACK };

class Card {
public:
	Card(colorType color, std::string name = "");
	Card(std::list<colorType> colors, std::string name = "");
	virtual cardType type() = 0;
	std::list<colorType> colors();
	bool hasColor(colorType color);
	bool isColorless();
	bool isMulticolored();
	std::string name();
private:
	std::list<colorType> _colors;
	std::string _name;
};