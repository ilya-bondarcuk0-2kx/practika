#include "SnackSlot.h"

SnackSlot::SnackSlot()
{
	this->size = 1;
	snackSlot = new Snack[size];
	iterator = 0;
}
SnackSlot::SnackSlot(int size)
{
	this->size = size;
	snackSlot = new Snack[size];
	iterator = 0;
}
SnackSlot::~SnackSlot()
{
	delete[] snackSlot;
}


int SnackSlot::GetSize() const 
{
	return this->size;
}
Snack& SnackSlot::GetSnack(int index) const
{
	return this->snackSlot[index];
}

void SnackSlot::SetSize(int size)
{
	this->size = size;
}
void SnackSlot::addSnack(Snack *other)
{
	if (iterator == size)
	{
		std::cout << "Все ячейки слота заполнены! Больше положить нельзя!" << std::endl;
	}
	else
	{
		snackSlot[iterator] = *other;
		++iterator;
	}
}
	