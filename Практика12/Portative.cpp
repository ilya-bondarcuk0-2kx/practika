#include "Portative.h"
Portative::Portative(std::string manufacturer, std::string name, int serviceLife, int price, int weight, int batteryCapacity)
	: Electronic(manufacturer, name, serviceLife, price, weight)
{
	this->batteryCapacity = batteryCapacity;
	this->type = "Портативная техника";
}

void Portative::getInfo()
{
	std::cout <<
		"Тип техники - " << type << "\n" <<
		"Производитель - " << manufacturer << "\n" <<
		"Имя продукта - " << name << "\n" <<
		"Срок службы(лет) - " << serviceLife << "\n" <<
		"Цена - " << price << " рублей\n" <<
		"Вес - " << weight << "кг\n" <<
		"Заряд аккумулятора - " << batteryCapacity << "mAh\n" <<
		std::endl;
}

