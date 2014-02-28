#include "card.h"

Card::Card(colorType colors, std::string name) {
	_colors = colors;
	_tapped = false;
}

colorType Card::colors() {
	return _colors;
}

bool Card::hasColors(colorType colors) {
	return colors && _colors;
}

bool Card::isColorless() {
	return _colors == COLORLESS;
}

bool Card::isMulticolored() {
	// TODO
	return false;
}

std::string Card::name() {
	return _name;
}