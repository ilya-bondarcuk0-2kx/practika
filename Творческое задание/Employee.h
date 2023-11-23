#pragma once
#include "Human.h"
class Employee final : public Human
{
public:
	Employee();
	Employee(std::string name, std::string sname, std::string patr, int tnumber, int age, int stage, std::string post);
	~Employee() override;

	void getInfo() override;
	
private:
	int stage;
	std::string post;
};

