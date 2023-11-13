#include "Snack.h"


Snack::Snack()
{
	this->callories = 0;
	this->name = "";
	this->price = 0;
}
Snack::Snack(int price, int callories)
{
	this->price = price;
	this->callories = callories;
}
Snack::Snack(std::string name)
{
	this->name = name;
}
Snack::Snack(std::string name, int price, int callories)
{
	this->name = name;
	this->price = price;
	this->callories = callories;
}


std::string Snack::getName() const
{
	return this->name;
}
int Snack::getPrice() const
{
	return this->price;
}
int Snack::getCallories() const
{
	return this->callories;
}

void Snack::SetName(std::string name)
{
	this->name = name;
}
void Snack::SetPrice(int price)
{
	this->price = price;
}
void Snack::SetCallories(int callories)
{
	this->callories = callories;
}



bool Snack::operator==(Snack& other)
{
	return (this->name == other.name) ? true : false;
}
bool Snack::operator !=(Snack& other)
{
	return !operator==(other);
}