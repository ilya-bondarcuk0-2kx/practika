#include "GameElectronic.h"
GameElectronic::GameElectronic(std::string manufacturer, std::string name, int serviceLife, int price, int weight,int batteryCapacity,int powerSupply,int fps, std::string matrixType)
	: Portative(manufacturer, name, serviceLife, price, weight, batteryCapacity) , 
	Household(manufacturer, name, serviceLife, price, weight, powerSupply),
	Electronic(manufacturer, name, serviceLife, price, weight)
{
	this->type = "������� �������";
	this->fps = fps;
	this->dpMatrixType = matrixType;
}

void GameElectronic::getInfo()
{
	std::cout <<
		"��� ������� - " << type << "\n" <<
		"������������� - " << manufacturer << "\n" <<
		"��� �������� - " << name << "\n" <<
		"���� ������(���) - " << serviceLife << "\n" <<
		"���� - " << price << " ������\n" <<
		"��� - " << weight << "��\n" <<
		"���������� fps - " << fps << "\n" <<
		"��� ������� - " << dpMatrixType << "\n" <<
		"����� ������������ - " << batteryCapacity << "mAh\n" <<
		"������������ ������� - " << powerSupply << "��\n" <<
	std::endl;
}

