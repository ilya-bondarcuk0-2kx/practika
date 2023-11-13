#pragma once
#include"Snack.h"
#include <iostream>
class SnackSlot
{
public:

	SnackSlot();
	SnackSlot(const int size);
	~SnackSlot();
	int GetSize() const;
	Snack& GetSnack(int index) const;
	void SetSize(int size);
	void addSnack(Snack *other);
private:
	int size;
	Snack *snackSlot;
	int iterator;
};

