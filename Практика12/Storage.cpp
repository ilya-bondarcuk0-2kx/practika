#include "Storage.h"
Storage::Storage()
{
	iterator = 0;
	electronic = new Electronic*[10];
	
}
void Storage::setProduct( Electronic* product)
{
	if (iterator == 10)
	{
		std::cout << "Склад заполнен" << std::endl;
		return;
	}
	electronic[iterator++] = product;
}

void Storage::getProductInfo(const Electronic *other) 
{
	for (int i = 0; i < 10; i++)
	{
		if (electronic[i] == other)
		{
			electronic[i]->getInfo();
			return;
		}
	}
	std::cout << "Такого товара нет на складе!" << std::endl;
	return;
}
Storage::~Storage()
{	
	delete electronic;
	electronic = nullptr;
}