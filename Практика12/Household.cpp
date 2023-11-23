#include "Household.h"
Household::Household(std::string manufacturer, std::string name, int serviceLife, int price, int weight,int powerSupply) 
	: Electronic(manufacturer, name, serviceLife, price, weight)
{
	this->powerSupply = powerSupply;
	this->type = "������� �������";
}


void Household::getInfo()
{
	std::cout <<
		"��� ������� - " << type << "\n" <<
		"������������� - " << manufacturer << "\n" <<
		"��� �������� - " << name << "\n" <<
		"���� ������(���) - " << serviceLife << "\n" <<
		"���� - " << price <<  " ������\n" <<
		"��� - " << weight << "��\n" <<
		"������������ ������� - " << powerSupply << "��\n" <<
		std::endl;
}

