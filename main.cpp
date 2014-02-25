#include "match.h"
#include "sampleDeck.h"

int main(int argc, const char * argv[]) {
	Match m(new Player(new SampleDeck()), new Player(new SampleDeck()));
	m.start();
	return 0;
}