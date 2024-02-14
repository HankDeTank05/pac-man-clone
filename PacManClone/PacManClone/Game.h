#ifndef GAME_H
#define GAME_H

#include "olcPixelGameEngine.h"

class Game : public olc::PixelGameEngine
{
public:
	Game();

public:
	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;
};

#endif