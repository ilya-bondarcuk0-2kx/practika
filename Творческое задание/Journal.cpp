#include "Journal.h"


Journal::Journal() = default;

Journal::Journal(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating, std::string publisher) :
	Book(author,name, type, text, pagesQuantity, rating), publisher(publisher)
{

}
Journal::~Journal()
{

}


void Journal::about()
{
	Book::about();
	std::cout <<
		"Издательство - " << publisher <<
	std::endl;
}
