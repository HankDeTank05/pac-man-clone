#ifndef GHOST_MOVE_STRATEGY_H
#define GHOST_MOVE_STRATEGY_H

#include "ActorMoveStrategy.h"

class GhostMoveStrategy : public ActorMoveStrategy
{
public:
	virtual void Move(Actor* pActor, olc::PixelGameEngine* pge) override;
};

#endif