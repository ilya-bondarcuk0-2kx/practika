#pragma once
#include"IElectronics.h"
class Appliances : IElectronics
{
public:
	Appliances(int weight);
	void ShowSpec() override;
private:
	int _weight;
};

