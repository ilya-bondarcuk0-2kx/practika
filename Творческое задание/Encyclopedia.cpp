#include "Encyclopedia.h"



Encyclopedia::Encyclopedia() = default;

Encyclopedia::Encyclopedia(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating, std::string sience) :
	Book(author, name, type, text, pagesQuantity, rating), sience(sience)
{

}
Encyclopedia::~Encyclopedia()
{

}

void Encyclopedia::about()
{
	Book::about();
	std::cout <<
		"Наука - " << sience <<
	std::endl;
}


void Encyclopedia::openBook()
{
	std::cout << "Открыл журнал" << std::endl;
}

void Encyclopedia::readBook()
{
	std::cout << "Прочитал журнал" << std::endl;
}

void Encyclopedia::closeBook()
{
	std::cout << "Закрыл журнал" << std::endl;
}