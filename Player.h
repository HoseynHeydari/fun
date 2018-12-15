#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
private:
	enum Direction
	{
		RIGHT = 0,
		LEFT
	};

	int location;
	Direction direction;

public:
	inline Player(int location)
	: location(location)
	, direction(RIGHT)
	{
	}

	inline void move()
	{
		if (direction == RIGHT)
			++location;
		else
			--location;
	}

	inline void change_direction()
	{
		if (direction == RIGHT)
			direction = LEFT;
		else
			direction = RIGHT;
	}

	inline int get_location()
	{
		return location;
	}

	inline void present()
	{
		if (direction == RIGHT)
			printf(">");
		else
			printf("<");
	}
};

#endif // PLAYER_H_
