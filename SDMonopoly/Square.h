#pragma once
#include <string>

enum SquareType
{
	Chance,
	CommunityChest,
	FreeParking,
	GoSquare,
	GoToJail,
	IncomeTax,
	Jail,
	LuxuryTax,
	Railroad,
	StandardPropertySquare,
	Utility
};

enum PropertyColor
{
	Brown,
	LightBlue,
	Pink,
	Orange,
	Red,
	Yellow,
	Green,
	Blue
};

struct Square
{
	SquareType type;
	std::string name;
};

struct PropertySquare : Square
{
	int cost;
	int rent[6];
	int owner = -1; //-1 is bank
	int sellValue = cost / 2;
	int mortgageValue;
};

struct StandardPropertySquare : PropertySquare
{
	int buildingCost;
	int numBuilding = 0;
	std::string color;
};
