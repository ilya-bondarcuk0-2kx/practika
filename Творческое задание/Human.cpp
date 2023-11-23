#include "Human.h"

Human::Human() = default;

Human::Human(std::string name, std::string sname, std::string patr, int tnumber, int age) :
	name(name), sname(sname), patr(patr), tnumber(tnumber), age(age)
{

}
Human::~Human()
{

}

void Human::getInfo()
{
	std::cout << "\n\n" <<
		"��� - " << name << "\n" <<
		"������� - " << sname << "\n" <<
		"�������� - " << patr << "\n" <<
		"����� �������� - " << tnumber << "\n" <<
		"������� - " << age <<
	std::endl;
	return;
}

std::string Human::getSname() const
{
	return sname;
}
