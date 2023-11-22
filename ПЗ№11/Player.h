#pragma once
#include"Device.h"
class Player : public Device
{
public:

	Player(std::string name , int baterryTime, int trackMaxQuantity);
	void ShowSpec() override;

private:
	int _baterryTime;
	int _trackMaxQuantity;
};

