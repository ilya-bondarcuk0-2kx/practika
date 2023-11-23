#pragma once
#include "Household.h"
#include "Portative.h"
class GameElectronic : public Portative, public Household
{
public:
	GameElectronic(std::string manufacturer, std::string name, int serviceLife, int price, int weight, int batteryCapacity, int powerSupply, int fps, std::string matrixType);
	void getInfo() override;
private:
	int fps;
	std::string type;
	std::string dpMatrixType;
};

