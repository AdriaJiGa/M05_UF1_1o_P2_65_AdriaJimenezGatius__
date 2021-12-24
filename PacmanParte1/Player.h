#pragma once
#include "ConsoleUtils.h"
#include"Map.h"
#include "Enemy.h"
#include <vector>
enum USER_INPUTS { NONE, UP, DOWN, RIGHT, LEFT, QUIT };
class Player
{
private:
	COORD spawn;

	COORD direction;
	char character = 'O';

	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::YELLOW;
	ConsoleUtils::CONSOLE_COLOR foreground_attack = ConsoleUtils::CONSOLE_COLOR::BLACK;

	
public:
	Player(COORD _spawn);
	COORD position;
	int points = 0;
	int lifes = 3;
	void Update(Map* _map, USER_INPUTS input, std::vector<Enemy>* enemies);
	void Draw();
	

};

