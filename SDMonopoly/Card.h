#pragma once
#include <math.h>
#include <string>

struct Card
{
	std::string name;
	std::string description;
};

class Deck
{
public:
	void Shuffle();
	Card Draw();
private:

protected:
	static const int SIZE_OF_DECK = 16;
	Card deck[SIZE_OF_DECK];

	int currentPosition = 0;
};
