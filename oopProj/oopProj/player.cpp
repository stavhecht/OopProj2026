#include "player.h"

void player::setArrowKeys(const char* keys) {
	arrowKeys[0] = keys[0]; // UP
	arrowKeys[1] = keys[1]; // DOWN
	arrowKeys[2] = keys[2]; // LEFT
	arrowKeys[3] = keys[3]; // RIGHT
}

void player::setDirection(int dir) {
	direction = dir;
}

void player::setColor(Color c) {
	color = c;
}

int player::getDirection(char key) {
	for (int i = 0; i < 4; i++) {
		if (key == arrowKeys[i]) {
			return i;
		}
	}
	return -1;
}

void player::move() {
	body.draw(' ');

	// 2. Move the internal point
	// Only move if direction is valid (0-3)
	if (direction >= 0 && direction <= 3) {
		body.move(direction);
	}

	// 3. Draw new position
	setTextColor(color);
	body.draw(playerSign);
	setTextColor(Color::WHITE); // Reset color
}