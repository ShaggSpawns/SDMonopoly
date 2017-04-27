#pragma once
#include <string>

struct Square
{
	std::string name;
};

struct PropertySquare: Square
{
	int cost;
	int rent;
	int houseCost;
	int hotelCost;
	int owner = -1;
	int sellValue;
	int mortgageValue;
};
