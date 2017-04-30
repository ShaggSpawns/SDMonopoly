#include "Player.h"

void Player::Pay(Player playerPaying, Player playerOwed, int amount)
{
	playerPaying.money -= amount;
	playerOwed.money += amount;
}
