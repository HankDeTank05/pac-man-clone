#include "GhostMoveStrategy.h"

#include "ActorAttorney.h"

void GhostMoveStrategy::Move(Actor* pActor, olc::PixelGameEngine* pge)
{
	int randChoice = rand() % 4;
	ActorAttorney::MoveStrategy::SetDir(pActor, static_cast<Actor::MoveDir>(randChoice));
}
