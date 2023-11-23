#include "Employee.h"


Employee::Employee() = default;

Employee::Employee(std::string name, std::string sname, std::string patr, int tnumber, int age, int stage, std::string post) : 
	Human(name, sname, patr, tnumber, age), stage(stage), post(post)
{

}
Employee::~Employee()
{

}


void Employee::getInfo()
{
	Human::getInfo();
	std::cout <<
		"Стаж работы - " << stage << "\n"
		"Должность - " << post <<
	std::endl;
	return;
}