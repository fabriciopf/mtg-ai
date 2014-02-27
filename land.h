#include "card.h"

class Land : public Card {
public:
	Land(colorType color, std::string name = "");
	Land(std::list<colorType> colors, std::string name = "");
	cardType type();
};