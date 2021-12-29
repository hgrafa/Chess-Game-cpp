// ---------------------------------
// headers and definitions

#ifndef CATCHER_H
#define CATCHER_H

	#include "data.h"
	#include <fstream>
	#include <iostream>
	#include <ctype.h>
	#include <vector>
	#include <math.h>

// ---------------------------------------
// pr� declarando as fun��es
	void readPgn(const char* file, GameSet *matchData, MoveSet *moves);
	void filterTags(std::string line, GameSet *matchData);
	void filterMoves(std::string line, MoveSet *movements);
	int whatsTheNumber(std::string numberString);

#endif // !CATCHER_H

