#include "card.h"

class Land : public Card {
public:
	Land(colorType colors, std::string name = "");
	cardType types();
};