#include "P1MoveStrategy.h"

#include "Actor.h"
#include "ActorAttorney.h"

void P1MoveStrategy::Move(Actor* pActor, olc::PixelGameEngine* pge)
{
	// read for input (P1)
	if (pge->GetKey(olc::Key::W).bPressed)
	{
		ActorAttorney::MoveStrategy::SetDir(pActor, Actor::MoveDir::North);
	}
	else if (pge->GetKey(olc::Key::D).bPressed)
	{
		ActorAttorney::MoveStrategy::SetDir(pActor, Actor::MoveDir::East);
	}
	else if (pge->GetKey(olc::Key::S).bPressed)
	{
		ActorAttorney::MoveStrategy::SetDir(pActor, Actor::MoveDir::South);
	}
	else if (pge->GetKey(olc::Key::A).bPressed)
	{
		ActorAttorney::MoveStrategy::SetDir(pActor, Actor::MoveDir::West);
	}
}
