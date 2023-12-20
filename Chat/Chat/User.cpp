#include "User.h"



User::User() : login(""), password(""), name(""), id(0)
{

}



std::string User::getLogin() const
{
	return login;
}

std::string User::getPassword() const
{
	return password;
}

std::string User::getName() const
{
	return name;
}

unsigned long User::getId() const
{
	return id;
}

void User::setLogin(std::string login)
{
	this->login = login;
}

void User::setPassword(std::string password)
{
	this->password = password;
}

void User::setName(std::string name)
{
	this->name = name;
}

void User::setId(const unsigned long& id)
{
	this->id = id;
}





std::ostream& operator<<(std::ostream& out, const User& user)
{
	out << user.login << '\n' 
		<< user.password << '\n'
		<< user.name << '\n'
		<< user.id;

	return out;
}

std::istream& operator>>(std::istream& in, User& user)
{

	in >> user.login >> user.password >> user.name >> user.id;

	return in;
}
