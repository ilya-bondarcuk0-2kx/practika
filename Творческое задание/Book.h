#pragma once
#include<string>
#include<iostream>
class Book
{
public:
	Book();
	Book(std::string author, std::string name, std::string type, std::string text, int pagesQuantity, double rating);
	~Book();



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

