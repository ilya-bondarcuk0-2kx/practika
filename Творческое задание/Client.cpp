#include "Client.h"

Client::Client() = default;

Client::Client(std::string name, std::string sname, std::string patr, int tnumber, int age, std::string preferences)
	: Human(name, sname , patr, tnumber, age), preferences(preferences)
{

}
Client::~Client()
{

}
//void Client::readABook(IBook* book) 
//{
//	book->openBook();
//	book->readBook();
//	book->closeBook();
//}


void Client::getInfo()
{
	Human::getInfo();
	std::cout <<
		"Предподтчения - " << preferences <<
	std::endl;
	return;
}

std::string Client::getPreferences() const
{
	return preferences;
}