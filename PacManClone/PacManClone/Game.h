#ifndef GAME_H
#define GAME_H

#include "olcPixelGameEngine.h"

// forward declarations
class PacMan;
class Ghost;

class Game : public olc::PixelGameEngine
{
public:
	Game();

public:
	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;

private:
	PacMan* p1;
	Ghost* pInky;
};

#endif