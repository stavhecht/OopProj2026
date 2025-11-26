#pragma once
#include "io_utils.h"


class Point {
	int x = 1, y = 1;
	char c = '*';
	friend class Player;
public:
	Point() {};
	Point(char _c) : c(_c) {};
	void draw(char c);
	void move(int direction);
};

