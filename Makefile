LIB=-L /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/usr/lib -L /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/usr/lib/system
INC=-I /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/usr/include/c++/4.2.1 -I /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/usr/include/ 

default:	mtg-ai

mtg-ai:	main.cpp
		gcc -Wall $(LIB) $(INC) -c main.cpp deck.cpp match.cpp card.cpp player.cpp sampleDeck.cpp spell.cpp land.cpp game.cpp
