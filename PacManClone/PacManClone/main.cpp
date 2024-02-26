#include "Game.h"

int main()
{
	Game pacman;
	if (pacman.Construct(256, 240, 2, 2))
	{
		pacman.Start();
	}

	return 0;
}