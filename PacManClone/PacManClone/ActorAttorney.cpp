#include "ActorAttorney.h"

void ActorAttorney::MoveStrategy::SetDir(Actor* pActor, Actor::MoveDir newDir)
{
	pActor->SetDir(newDir);
}
