#ifndef ACTOR_ATTORNEY_H
#define ACTOR_ATTORNEY_H

#include "olcPixelGameEngine.h"

#include "Actor.h"

class ActorAttorney
{
public:

	class MoveStrategy
	{
		friend class P1MoveStrategy;
		friend class GhostMoveStrategy;
		static void SetDir(Actor* pActor, Actor::MoveDir newDir);
	};
};

#endif