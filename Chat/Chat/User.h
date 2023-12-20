#pragma once
#include"ostream"
#include"istream"
#include<string>
#include<vector>
class User
{
public:

	User();
	
	
	std::string getLogin() const;
	std::string getPassword() const;
	std::string getName() const;
	unsigned long getId() const;


	void setLogin(std::string login);
	void setPassword(std::string password);
	void setName(std::string name);
	void setId(const unsigned long& id);


	friend std::ostream& operator << (std::ostream& out, const User& user);
	friend std::istream& operator >> (std::istream& in, User& user);

private:
	std::string login;

	std::string password;

	std::string name;

	unsigned long id;
};

/*Класс User.Содержит в себе

1. Методы

*/ 
