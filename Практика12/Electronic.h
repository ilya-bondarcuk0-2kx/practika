#pragma once
#include<iostream>
#include<string>
class Electronic
{
public:
	Electronic() = default;
	Electronic(std::string manufacturer, std::string name, int serviceLife , int price, int weight);
	virtual void getInfo() = 0;

	bool operator == (const Electronic& other) const;
	/*virtual void howUse() = 0;*/


protected: //наверняка стоит заменить на private и сделать getInfo не чисто виртуальным
	std::string manufacturer;
	std::string name;
	int serviceLife;
	int price;
	int weight;
};