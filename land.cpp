#include "land.h"

Land::Land(colorType color, std::string name) : Card(color, name) {

}

Land::Land(std::list<colorType> colors, std::string name) : Card(colors, name) {

}

cardType Land::type() {
	return LAND;
}
