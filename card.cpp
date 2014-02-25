#include "card.h"

Card::Card(cardType type, cardColor color) : _type(type) {
	_colors.push_back(color);
}

Card::Card(cardType type, std::list<cardColor> colors) : _type(type) {
	_colors.insert(_colors.end(), colors.begin(), colors.end());
}

cardType Card::type() {
	return _type;
}

std::list<cardColor> Card::colors() {
	return _colors;
}

bool Card::hasColor(cardColor color) {
	//TODO: iterate all elements
	return false;
}
