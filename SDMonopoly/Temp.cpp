if (board[landed].isProperty)
{
	if (board[landed].owner == -1)
	{
		//bank owned
	}
	else if (board[landed].isUtility)
	{
		if (board[landed].owner == currentPlayerTurn)
		{
			continue;
		}
		else if (player[board[landed].owner].hasBothUtility)
			rentOwed == roll * 10;
		else
			rentOwed == roll * 6;
	}
}
else if (board[landed].isRailroad)
{

}
else
{
	// Handles Default Property Squares
}
		}
	}
}

if (landed % 10 == 0)
{
	tempVal = landed / 10;

	if (tempVal == 3)
	{
		player.currentSquare == 10;
	}
}
