#include "card.h"
#include <list>

class Spell : public Card {
public:
	Spell(colorType color, std::list<colorType> manaCost, std::string name = "");	
	std::list<colorType> manaCost();
	virtual bool cast() = 0;
private:
	std::list<colorType> _manaCost;
};