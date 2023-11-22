#include "Player.h"


Player::Player(std::string name, int baterryTime, int trackMaxQuantity) : Device(name), _baterryTime(baterryTime), _trackMaxQuantity(trackMaxQuantity)
{
}

void Player::ShowSpec()
{
	Device::ShowSpec();
	std::cout <<
		"����� ������ ������������ - " << _baterryTime << "\n" <<
		"������������ ���������� ������ - " << _trackMaxQuantity << "\n" <<
	std::endl;

}