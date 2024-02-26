#include "Ghost.h"

#include "P1MoveStrategy.h"

Ghost::Ghost()
	: Actor(new P1MoveStrategy(), olc::vf2d(10.0f, 10.0f), Actor::MoveDir::East, 20.0f),
	moveTimer(3.0f)
{

}

Ghost::~Ghost()
{
	// do nothing
}

void Ghost::Update(float fElapsedTime, olc::PixelGameEngine* pge)
{
	moveTimer -= fElapsedTime;
	if (moveTimer <= 0.0f)
	{
		moveTimer = 3.0f;
		Move(fElapsedTime, pge);
	}
}

void Ghost::Draw(olc::PixelGameEngine* pge)
{
	pge->FillRect(GetPos(), olc::vf2d(10.0f, 10.0f), olc::CYAN);
}
