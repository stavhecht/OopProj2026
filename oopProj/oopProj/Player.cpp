#include "Player.h"

void Player::move()
{
	pos.draw(' ');
	pos.move(direction);
	setTextColor(color);
	pos.draw(pos.c);
	setTextColor(Color::WHITE);
}

int Player::getDirection(char key)
{
	for (int i = 0; i < 4; ++i)
	{
		if (key == arrowKeys[i])
			return i;
	}

	return -1;
}