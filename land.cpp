#include "land.h"

Land::Land(colorType colors, std::string name) : Card(colors, name) {

}

cardType Land::types() {
	return (cardType) (LAND | ARTIFACT);
}
