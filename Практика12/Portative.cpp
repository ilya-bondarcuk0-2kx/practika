#include "Portative.h"
Portative::Portative(std::string manufacturer, std::string name, int serviceLife, int price, int weight, int batteryCapacity)
	: Electronic(manufacturer, name, serviceLife, price, weight)
{
	this->batteryCapacity = batteryCapacity;
	this->type = "����������� �������";
}

void Portative::getInfo()
{
	std::cout <<
		"��� ������� - " << type << "\n" <<
		"������������� - " << manufacturer << "\n" <<
		"��� �������� - " << name << "\n" <<
		"���� ������(���) - " << serviceLife << "\n" <<
		"���� - " << price << " ������\n" <<
		"��� - " << weight << "��\n" <<
		"����� ������������ - " << batteryCapacity << "mAh\n" <<
		std::endl;
}

