#ifndef ACTOR_MOVE_STRATEGY_H
#define ACTOR_MOVE_STRATEGY_H

#include "olcPixelGameEngine.h"

// forward declarations
class Actor;

class ActorMoveStrategy
{
public:
	virtual void Move(Actor* pActor, olc::PixelGameEngine* pge) = 0;
};

#endif