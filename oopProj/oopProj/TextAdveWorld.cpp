#include "TextAdveWorld.h"

void TextAdveWorld::init()
{
	p[0].setArrowKeys("wxad");
	p[1].setArrowKeys("imjl");
	//p[0].setColor(Color::LIGHTBLUE);
	//p[1].setColor(Color::LIGHTGREEN);
}
void TextAdveWorld::run()
{
	char key = 0;
	int dir;
	do
	{
		if (_kbhit())
		{
			key = _getch();
			if ((dir = p[0].getDirection(key)) != -1)
				p[0].setDirection(dir);
			else if ((dir = p[1].getDirection(key)) != -1)
				p[1].setDirection(dir);
		}

		p[0].move();
		p[1].move();
		Sleep(100);
	} while (key != ESC);
}