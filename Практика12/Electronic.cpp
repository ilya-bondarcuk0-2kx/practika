#include "Electronic.h"
Electronic::Electronic(std::string manufacturer, std::string name, int serviceLife, int price, int weight)
{
	this->manufacturer = manufacturer;
	this->name = name;
	this->serviceLife = serviceLife;
	this->price = price;
	this->weight = weight;
}

bool Electronic::operator == (const Electronic& other) const
{
	return (this->name == other.name) ?  true : false;
}