#pragma once
#include "Book.h"
class Encyclopedia : public Book
{
public:
	Encyclopedia();
	Encyclopedia(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating, std::string sience);
	~Encyclopedia();
	void about() override;
	void openBook() override;
	void readBook() override;
	void closeBook() override;
private:
	std::string sience;
};

