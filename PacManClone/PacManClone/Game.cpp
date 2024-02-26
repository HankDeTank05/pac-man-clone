#include "Game.h"

#include "PacMan.h"
#include "Ghost.h"

Game::Game()
{
	sAppName = "Pac-Man Clone";
}

bool Game::OnUserCreate()
{
	p1 = new PacMan();
	pInky = new Ghost();

	return true;
}

bool Game::OnUserUpdate(float fElapsedTime)
{
	// update phase
	p1->Update(fElapsedTime, this);
	pInky->Update(fElapsedTime, this);

	// draw phase
	Clear(olc::BLACK);
	p1->Draw(this);
	pInky->Draw(this);

	return true;
}
