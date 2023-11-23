#pragma once
#include "Electronic.h"
class Portative : public virtual Electronic
{
public:
	Portative(std::string manufacturer, std::string name, int serviceLife, int price, int weight, int batteryCapacity);
	void getInfo() override;
	
protected:
	int batteryCapacity;
	std::string type;

};

