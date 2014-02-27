#include "card.h"

Card::Card(colorType color, std::string name) {
	_colors.push_back(color);
}

Card::Card(std::list<colorType> colors, std::string name) {
	_colors.insert(_colors.end(), colors.begin(), colors.end());
}

std::list<colorType> Card::colors() {
	return _colors;
}

bool Card::hasColor(colorType color) {
	//TODO: iterate all elements
	return false;
}

bool Card::isColorless() {
	return !_colors.size();
}

bool Card::isMulticolored() {
	return _colors.size() > 1;
}

std::string Card::name() {
	return _name;
}