#pragma once
#include "io_utils.h"

#include <cstring>
#include "Point.h"

class Player {
	friend class point;
	Point pos;
	int direction = -1;
	char arrowKeys[4];
	Color color;
public:
	Player() {};
	Player(char c) : pos(c) {};
	void setArrowKeys(const char* keys) {
		arrowKeys[0] = keys[0];
		arrowKeys[1] = keys[1];
		arrowKeys[2] = keys[2];
		arrowKeys[3] = keys[3];
	}
	void setColor(Color c) {
		color = c;
	}
	void move();
	int getDirection(char key);
	void setDirection(int dir) {
		direction = dir;
	}

};

