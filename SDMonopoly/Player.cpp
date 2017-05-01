#include "Player.h"

int Player::Pay(Player playerOwed, int amount)
{
	if (money > amount)
	{
		money -= amount;
		playerOwed.money += amount;

		return amount;
	}
	else
	{
		return money;
	}
}

void Player::ReceiveMoney(int amount)
{
	money += amount;
}
