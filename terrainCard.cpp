#include "terrainCard.h"

TerrainCard::TerrainCard(cardColor color) : Card(TERRAIN_TYPE, color) {

}

TerrainCard::TerrainCard(std::list<cardColor> colors) : Card(TERRAIN_TYPE, colors) {

}
