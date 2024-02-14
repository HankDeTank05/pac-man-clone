#ifndef GAME_H
#define GAME_H

#include "olcPixelGameEngine.h"

class Game : public olc::PixelGameEngine
{
public:
	Game()
	{
		sAppName = "Pac-Man Clone";
	}

public:
	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		return true;
	}
};

#endif