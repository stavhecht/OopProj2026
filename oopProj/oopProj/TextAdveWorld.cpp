#include "TextAdveWorld.h"

void TextAdveWorld::init()
{
	p[0].setArrowKeys("wxad");
	p[1].setArrowKeys("imjl");
	//p[0].setColor(Color::LIGHTBLUE);
	//p[1].setColor(Color::LIGHTGREEN);

	p[0].setPos(10,10);
	p[1].setPos(15,10);
}

void TextAdveWorld::run()
{
	char key = 0;
	int dir;
    do {
        if (_kbhit()) {
            key = _getch();

            // Handle STAY keys first (S for P1, K for P2 – case-insensitive)
            if (key == 's' || key == 'S') {
                p[0].setDirection(-1); // STAY
            }
            else if (key == 'k' || key == 'K') {
                p[1].setDirection(-1); // STAY
            }
            else {
                // Movement keys for each player
                if ((dir = p[0].getDirection(key)) != -1) {
                    p[0].setDirection(dir);
                }
                else if ((dir = p[1].getDirection(key)) != -1) {
                    p[1].setDirection(dir);
                }
            }
        }

		p[0].move();
		p[1].move();
		Sleep(100);
	} while (key != ESC);
}