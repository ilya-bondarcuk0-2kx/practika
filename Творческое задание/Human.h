#pragma once
#include"IBook.h"
#include<iostream>
#include<string>
class Human
{
public:
	Human();
	Human(std::string name, std::string sname, std::string patr, int tnumber, int age);
	/*virtual void readABook(IBook *book);*/
	virtual ~Human() = 0;
	virtual void getInfo();
	std::string getSname() const;
private:
	std::string name;
	std::string sname;
	std::string patr;
	int tnumber;
	int age;
};

