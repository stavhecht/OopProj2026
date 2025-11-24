#ifndef _TextAdveWorld_H_
#define _TextAdveWorld_H_
#include "utils.h"
#include "player.h"

class TextAdveWorld {
	enum { ESC = 27 };
	player p[2] = { player('$', Color::LIGHTBLUE), player('&', Color::LIGHTGREEN) };

public:
	void init();
	void run();
};

#endif
