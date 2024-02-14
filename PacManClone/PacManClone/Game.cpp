#include "Game.h"

Game::Game()
{
	sAppName = "Pac-Man Clone";
}

bool Game::OnUserCreate()
{
	return true;
}

bool Game::OnUserUpdate(float fElapsedTime)
{
	return true;
}
