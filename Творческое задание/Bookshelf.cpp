#include "Bookshelf.h"


int Bookshelf::size = 0;

Bookshelf::Bookshelf()
{
	
}
Bookshelf::~Bookshelf()
{
	for (auto book : books)
	{
		delete book;
	}
	books.clear();
}

void Bookshelf::AddBook(Book* book)
{
	books.push_back(book);
	++size;
}

int Bookshelf::getSize()
{
	return size;
}


Book* Bookshelf::getBook(int index)
{
	return books[index];
}