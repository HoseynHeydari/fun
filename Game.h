#ifndef GAME_H_
#define GAME_H_

#include "PlayGround.h"
#include "Player.h"

class Game
{
private:
	PlayGround play_ground;
	Player player;

public:
	Game(int size)
	: play_ground(size)
	, player(0)
	{
	}

	inline void move()
	{
		play_ground.toggle_entity_at(player.get_location());
		if(player.get_location() < play_ground.get_ground_size() - 1)
		{
			player.move();
		}
		else
		{
			turn_back();
			player.move();
		}
		play_ground.toggle_entity_at(player.get_location());
	}

	inline void turn_back()
	{
		player.change_direction();
	}

	inline void show_ground()
	{
		for (int i = 0; i < play_ground.get_ground_size(); ++i)
			if (i != player.get_location())
				printf("_");
			else
				player.present();
		printf("\n");
	}
};

#endif // GAME_H_
