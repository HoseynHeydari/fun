#ifndef PLAY_GROUND_H_
#define PLAY_GROUND_H_

#include <vector>

#include "Player.h"

using std::vector;

class PlayGround
{
private:
	enum Entity
	{
		EARTH = 0,
		PLAYER,
	};

	std::vector<Entity> ground;

public:
	inline PlayGround(int size)
	: ground(std::vector<Entity>(size, EARTH))
	{
	}

	inline void toggle_entity_at(int location)
	{
		if (location >= ground.size())
			location = location % ground.size();

		if (ground[location] == EARTH)
			ground[location] = PLAYER;
		else
			ground[location] = EARTH;
	}

	inline int get_ground_size()
	{
		return ground.size();
	}
};

#endif // PLAY_GROUND_H_
