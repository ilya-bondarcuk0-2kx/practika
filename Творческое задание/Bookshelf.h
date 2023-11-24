#pragma once
#include<vector>
#include"Book.h"
class Bookshelf final
{
public:
	Bookshelf();
	~Bookshelf();

	static int getSize();

	Book* getBook(int index);

	void AddBook(Book* book);
private:
	
	std::vector<Book*> books;
	static int size;
};

