#include "PacMan.h"

#include <cassert>

#include "P1MoveStrategy.h"

PacMan::PacMan()
	: Actor(new P1MoveStrategy(), olc::vf2d(0.0f, 0.0f), Actor::MoveDir::East, 20.0f)
{
	// do nothing
}

PacMan::~PacMan()
{
	// do nothing
}

void PacMan::Update(float fElapsedTime, olc::PixelGameEngine* pge)
{
	Move(fElapsedTime, pge);
}

void PacMan::Draw(olc::PixelGameEngine* pge)
{
	pge->FillCircle(GetPos(), 5, olc::YELLOW);
}
