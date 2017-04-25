#include "Card.h"

void Deck::Shuffle ()
{
	int j;
	Card tempCard;
	
	for (int i = 0; i < SIZE_OF_DECK; i++) {
		j = (int) rand() * SIZE_OF_DECK;
		tempCard = deck[i];
		deck[i] = deck[j];
		deck[j] = tempCard;
	}

	currentPosition = 0;
}

Card Deck::Draw()
{
	if ((currentPosition++) = SIZE_OF_DECK - 1)
		Deck::Shuffle();
	return deck[currentPosition];
}
