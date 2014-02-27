#include "spell.h"

Spell::Spell(colorType color, std::list<colorType> manaCost, std::string name) : Card(color, name) {
	_manaCost.insert(_manaCost.end(), manaCost.begin(), manaCost.end());
}

std::list<colorType> Spell::manaCost() {
	return _manaCost;
}