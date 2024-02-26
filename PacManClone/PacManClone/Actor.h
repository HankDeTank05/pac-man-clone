#ifndef ACTOR_H
#define ACTOR_H

#include "olcPixelGameEngine.h"

// forward declarations
class ActorMoveStrategy;

class Actor
{
public:
	Actor() = delete;
	
	enum class MoveDir { North = 0, East = 1, South = 2, West = 3 };
	Actor(ActorMoveStrategy* pStrategy, olc::vf2d initPos, MoveDir dir, float speed);

	Actor(const Actor& a) = delete;
	Actor& operator=(const Actor& a) = delete;
	virtual ~Actor();

	void Move(float fElapsedTime, olc::PixelGameEngine* pge);

	olc::vf2d GetPos();

private: // attorney-accessible functions
	friend class ActorAttorney;
	void SetDir(MoveDir newDir);

private:
	ActorMoveStrategy* pMoveStrategy;
	olc::vf2d pos;
	MoveDir dir;
	float speed;
};

#endif