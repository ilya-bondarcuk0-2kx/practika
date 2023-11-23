#pragma once
#include"IBook.h"
class Book : public IBook
{
public:
	Book();
	Book(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating);
	~Book();


	void openBook() override;
	void readBook() override;
	void closeBook() override;

	virtual void about();

	std::string getName() const;
	std::string getType() const;
	
	bool operator ==(const Book &other);
private:
	std::string author;
	std::string name;
	std::string type;
	std::string text;
	int pagesQuantity;
	double rating;
};

