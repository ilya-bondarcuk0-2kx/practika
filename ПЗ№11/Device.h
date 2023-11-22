#pragma once
#include"IElectronics.h"
class Device : IElectronics
{
public:
	Device(std::string name);
	~Device();
	void ShowSpec() override;
private:
	std::string _name;
};