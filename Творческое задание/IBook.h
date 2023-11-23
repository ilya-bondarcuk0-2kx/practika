#pragma once
#include<string>
#include<iostream>
class IBook
{
public:
	virtual void openBook() = 0;
	virtual void readBook() = 0;
	virtual void closeBook() = 0;
};

