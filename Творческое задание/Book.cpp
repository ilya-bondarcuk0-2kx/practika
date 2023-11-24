#include "Book.h"


Book::Book() = default;

Book::Book(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating) :
	author(author), name(name), type(type), text(text), pagesQuantity(pagesQuantity), rating(rating)
{

}

Book::~Book()
{

}




void Book::about()
{
	std::cout << "\n\n" <<
		"Автор - " << author << "\n" <<
		"Имя книги - " << name << "\n" <<
		"Тип(жанр) - " << type << "\n" <<
		"Содержание - " << text << "\n" <<
		"Количество страниц - " << pagesQuantity << "\n" <<
		"Рейтинг - " << rating <<
	std::endl;
}



std::string Book::getName() const
{
	return name;
}

std::string Book::getType() const
{
	return type;
}


bool Book::operator==(const Book &other)
{
	return (this->name == other.name && this->author == other.author) ? true : false;
}