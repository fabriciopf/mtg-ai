#include "card.h"

class TerrainCard : public Card {
public:
	TerrainCard(cardColor color);
	TerrainCard(std::list<cardColor> colors);
};