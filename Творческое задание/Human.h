#pragma once
#include<iostream>
#include<string>
class Human
{
public:
	Human();
	Human(std::string name, std::string sname, std::string patr, int tnumber, int age);
	virtual ~Human() = 0;
	virtual void getInfo();
	std::string getName() const;
	std::string getSname() const;
private:
	std::string name;
	std::string sname;
	std::string patr;
	int tnumber;
	int age;
};

