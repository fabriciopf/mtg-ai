#include "card.h"

Card::Card(cardType type) : _type(type) {

}

cardType Card::type() {
	return _type;
}