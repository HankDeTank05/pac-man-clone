#ifndef P1_MOVE_STRATEGY_H
#define P1_MOVE_STRATEGY_H

#include "ActorMoveStrategy.h"

class P1MoveStrategy : public ActorMoveStrategy
{
public:
	virtual void Move(Actor* pActor, olc::PixelGameEngine* pge) override;
};

#endif