#include "Game.h"

int main()
{
	Game pacman;
	if (pacman.Construct(256, 240, 4, 4))
	{
		pacman.Start();
	}

	return 0;
}