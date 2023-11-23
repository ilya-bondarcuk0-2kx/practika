#pragma once
#include"Electronic.h"
class Storage
{
public:
	Storage();
	~Storage();
	void setProduct( Electronic *product);
	void getProductInfo(const Electronic *other);
private:
	Electronic **electronic;
	int iterator;
};

