#ifndef PAC_MAN_H
#define PAC_MAN_H

#include "olcPixelGameEngine.h"

#include "Actor.h"

class PacMan : public Actor
{
public:
	PacMan();
	PacMan(const PacMan& pm) = delete;
	PacMan& operator=(const PacMan& pm) = delete;
	virtual ~PacMan();

	void Update(float fElapsedTime, olc::PixelGameEngine* pge);
	void Draw(olc::PixelGameEngine* pge);

private:
};

#endif