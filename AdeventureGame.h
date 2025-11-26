#pragma once
#include "io_utils.h"
#include "Player.h"

class AdeventureGame {
	enum { ESC = 27 };
	Player p[2] = { Player('$'), Player('&') };
public:
	void init();
	void run();
};

