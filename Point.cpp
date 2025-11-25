#include "Point.h"


void Point::draw(char ch)const {
	gotoxy(x, y);
	cout << ch << endl;
}

void Point::move(int dir) {
    switch (dir) {
    case 0: // UP
        if (y > 1) {
            --y;
        }
        break;

    case 1: // DOWN
        if (y < 24) {
            ++y;
        }
        break;

    case 2: // LEFT
        if (x > 1) {
            --x;
        }
        break;

    case 3: // RIGHT
        if (x < 79) {
            ++x;
        }
        break;
    }
}


void Point::set(int _x, int _y) {
    x = _x;
    y = _y;
}
