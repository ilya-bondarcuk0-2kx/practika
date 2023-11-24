#pragma once
#include "Book.h"
class Encyclopedia final: public Book
{
public:
	Encyclopedia();
	Encyclopedia(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating, std::string sience);
	~Encyclopedia();
	void about() override;
private:
	std::string sience;
};

