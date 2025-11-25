#ifndef _POINT_H_
#define _POINT_H_

#include "utils.h"

class Point {
	int x = 1, y = 1;
public:
	void set(int _x, int _y);
	void draw(char ch) const;
	void move(int direction);
};

#endif