#include "Player.h"


Player::Player(std::string name, int baterryTime, int trackMaxQuantity) : Device(name), _baterryTime(baterryTime), _trackMaxQuantity(trackMaxQuantity)
{
}

void Player::ShowSpec()
{
	Device::ShowSpec();
	std::cout <<
		"Время работы аккумулятора - " << _baterryTime << "\n" <<
		"Максимальное количество треков - " << _trackMaxQuantity << "\n" <<
	std::endl;

}