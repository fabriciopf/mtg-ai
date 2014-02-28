#pragma once
#include <string>

enum cardType { ARTIFACT = 1<<0, CREATURE = 1<<1, ENCHANTMENT = 1<<2, INSTANT = 1<<3, LAND = 1<<4, PLANEWALKER = 1<<5, SORCERY = 1<<6 };
enum colorType { COLORLESS = 0, RED = 1<<0, BLUE = 1<<1, GREEN = 1<<2, WHITE = 1<<3, BLACK = 1<<4 };

class Card {
public:
	Card(colorType colors = COLORLESS, std::string name = "");
	virtual cardType types() = 0;
	colorType colors();
	bool hasColors(colorType colors);
	bool isColorless();
	bool isMulticolored();
	std::string name();
	bool isTapped();
private:
	colorType _colors;
	std::string _name;
	bool _tapped;
};