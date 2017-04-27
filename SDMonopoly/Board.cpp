#include <string>
#include "Board.h"

#define SIZE_OF_BOARD 40

Square* Board::BuildBoard (FILE * ifp)
{
	Square board[SIZE_OF_BOARD];

	for (int i = 0; i < 40; i++)
	{
		fscanf(ifp, "%s %d %d %d %d %d %d", board[i].name, board[i].cost, board[i].houseCost, board[i].hotelCost, board[i].sellValue, board[i].mortgageValue);
	}

	return board;
}

// TODO: Pass-by-reference the player buying property && board
/*void Board::PurchaseProperty(player players[], int newOwner, int propertyID)
{
	if (player[newOwner].money > board[propertyID].cost)
	{
		board[propertyID].owner = newOwner;
		player[newOwner].money -= board[propertyID].cost);
	}
}*/
