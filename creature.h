#include "spell.h"

class Creature : public Spell {
public:
	bool attack();
	bool block();
private:
	int _power;
	int _toughness;
};