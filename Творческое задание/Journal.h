#pragma once
#include"Book.h"
class Journal final: public Book
{
public:
	Journal();
	Journal(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating, std::string publisher);
	~Journal();
	void about() override;
private:
	std::string publisher;
};

