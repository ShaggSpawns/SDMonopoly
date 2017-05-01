#pragma once

#include "Square.h"
#include <vector>

class Player
{
public:
	int Pay (Player playerOwed, int amount);
	void ReceiveMoney(int amount);

	int numOfUtility = 0;
	int numOfRailRoad = 0;

	std::vector <Square> ownedSquares;
private:
	int money;
};
