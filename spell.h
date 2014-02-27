#include "card.h"

class Spell : public Card {
public:
	Spell(colorType color, std::list<colorType> manaCost, std::string name = "");	
	std::list<colorType> manaCost();
private:
	std::list<colorType> _manaCost;
};