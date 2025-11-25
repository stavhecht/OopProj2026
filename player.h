#pragma once
#include "Point.h"

class player{

	Point body;
	char playerSign;
	Color color;
	char arrowKeys[4];    // 0: UP, 1: DOWN, 2: LEFT, 3: RIGHT
	int direction = -1;  //STAY



public:
	player() = default;
	player(char sign, Color color_) : playerSign(sign),  color(color_) {};

	void setArrowKeys(const char* keys);
	void setDirection(int dir);
	void setColor(Color c);
	void setPos(int x, int y);

	// Returns 0-3 if key matches arrowKeys, otherwise -1
	int getDirection(char key);
	void move();

};

