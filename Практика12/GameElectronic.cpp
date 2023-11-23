#include "GameElectronic.h"
GameElectronic::GameElectronic(std::string manufacturer, std::string name, int serviceLife, int price, int weight,int batteryCapacity,int powerSupply,int fps, std::string matrixType)
	: Portative(manufacturer, name, serviceLife, price, weight, batteryCapacity) , 
	Household(manufacturer, name, serviceLife, price, weight, powerSupply),
	Electronic(manufacturer, name, serviceLife, price, weight)
{
	this->type = "Игровая техника";
	this->fps = fps;
	this->dpMatrixType = matrixType;
}

void GameElectronic::getInfo()
{
	std::cout <<
		"Тип техники - " << type << "\n" <<
		"Производитель - " << manufacturer << "\n" <<
		"Имя продукта - " << name << "\n" <<
		"Срок службы(лет) - " << serviceLife << "\n" <<
		"Цена - " << price << " рублей\n" <<
		"Вес - " << weight << "кг\n" <<
		"Выдаваемый fps - " << fps << "\n" <<
		"Тип матрицы - " << dpMatrixType << "\n" <<
		"Заряд аккумулятора - " << batteryCapacity << "mAh\n" <<
		"Неообходиоме питание - " << powerSupply << "Вт\n" <<
	std::endl;
}

