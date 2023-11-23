#pragma once
#include "Electronic.h"
class Household : public virtual Electronic
{
public:
	Household(std::string manufacturer, std::string name, int serviceLife, int price, int weight, int powerSupply);
	void getInfo() override;
protected:
	int powerSupply;
	std::string type;
};

