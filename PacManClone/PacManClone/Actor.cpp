#include "Actor.h"
#include <cassert>

#include "ActorMoveStrategy.h"

Actor::Actor(ActorMoveStrategy* _pMoveStrategy, olc::vf2d initPos, MoveDir _dir, float _speed)
	: pMoveStrategy(_pMoveStrategy),
	pos(initPos),
	dir(_dir),
	speed(_speed)
{
}

Actor::~Actor()
{
	delete pMoveStrategy;
}

void Actor::Move(float fElapsedTime, olc::PixelGameEngine* pge)
{
	pMoveStrategy->Move(this, pge);

	olc::vf2d posDelta;
	switch (dir)
	{
	case MoveDir::North:
		posDelta = { 0.0f, -1.0f };
		break;
	case MoveDir::East:
		posDelta = { 1.0f, 0.0f };
		break;
	case MoveDir::South:
		posDelta = { 0.0f, 1.0f };
		break;
	case MoveDir::West:
		posDelta = { -1.0f, 0.0f };
		break;
	default:
		assert(false);
		break;
	}

	posDelta *= speed * fElapsedTime;
	pos += posDelta;
}

olc::vf2d Actor::GetPos()
{
	return pos;
}

void Actor::SetDir(MoveDir newDir)
{
	dir = newDir;
}
