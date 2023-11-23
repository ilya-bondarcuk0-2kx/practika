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
		"Имя - " << name << "\n" <<
		"Фамилия - " << sname << "\n" <<
		"Отчество - " << patr << "\n" <<
		"Номер телефона - " << tnumber << "\n" <<
		"Возраст - " << age <<
	std::endl;
	return;
}

std::string Human::getSname() const
{
	return sname;
}
