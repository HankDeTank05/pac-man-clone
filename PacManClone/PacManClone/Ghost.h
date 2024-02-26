#ifndef GHOST_H
#define GHOST_H

#include "Actor.h"

class Ghost : public Actor
{
public:
	Ghost();
	Ghost(const Ghost& g) = delete;
	Ghost& operator=(const Ghost& g) = delete;
	virtual ~Ghost();

	void Update(float fElapsedTime, olc::PixelGameEngine* pge);
	void Draw(olc::PixelGameEngine* pge);

private:
	float moveTimer;
};

#endif