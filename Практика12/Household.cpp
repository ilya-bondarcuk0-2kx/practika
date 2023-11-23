#include "Household.h"
Household::Household(std::string manufacturer, std::string name, int serviceLife, int price, int weight,int powerSupply) 
	: Electronic(manufacturer, name, serviceLife, price, weight)
{
	this->powerSupply = powerSupply;
	this->type = "Бытовая техника";
}


void Household::getInfo()
{
	std::cout <<
		"Тип техники - " << type << "\n" <<
		"Производитель - " << manufacturer << "\n" <<
		"Имя продукта - " << name << "\n" <<
		"Срок службы(лет) - " << serviceLife << "\n" <<
		"Цена - " << price <<  " рублей\n" <<
		"Вес - " << weight << "кг\n" <<
		"Неообходиоме питание - " << powerSupply << "Вт\n" <<
		std::endl;
}

