#include <string>
#include <iostream>
#include <fstream>

#include "Board.h"


#define SIZE_OF_BOARD 40

Square* Board::BuildBoard (FILE * ifp)
{
	std::ifstream boardInputFile ("Properties.txt");

	Square board[SIZE_OF_BOARD];

	board[0].name = "GO";
	board[1].name = "Mediterranean Avenue";
	board[1].type = StandardPropertySquare;
	board[2].name = "Community Chest";
	board[2].type = CommunityChest;

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

/*
StandardPropertySquare * listOfPropertySquares[20];
int arrayLocation;
std::string bufferString, tempString;
while (!boardInputFile.eof())
{
getline(boardInputFile, bufferString);

if (bufferString.length > 0)
{
switch (bufferString.at(0))
{
case '[':
listOfPropertySquares[arrayLocation] = new StandardPropertySquare;
listOfPropertySquares[arrayLocation]->name = bufferString.substr(1, bufferString.length - 2);
break;
case 'C':
listOfPropertySquares[arrayLocation]->color = bufferString.substr(6);
break;
case 'R':
tempString = bufferString.substr(6, bufferString.length - 7);

int count = 0;
int startOfNum, endOfNum;
for (int i = 0; i < tempString.length; i++)
{
if (tempString.at(i) != ',')
{
startOfNum = i;
endOfNum = -1;
}
else
endOfNum = i;

if (endOfNum != -1)
{
listOfPropertySquares[arrayLocation]->rent[count] = std::stoi(tempString.substr(startOfNum, endOfNum - startOfNum));
count++;
}
}
break;
case 'B':
listOfPropertySquares[arrayLocation]->buildingCost = std::stoi(bufferString.substr(13));
break;
default:
break;
}
}
}
*/
