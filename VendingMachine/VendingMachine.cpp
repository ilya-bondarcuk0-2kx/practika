#include "VendingMachine.h"
#include "User.h"
VendingMachine::VendingMachine(int slotCount)
{
	this->slotCount = slotCount;
	machineSlot = new SnackSlot[slotCount];
	iterator = 0;
	amount = 0;
}

VendingMachine::~VendingMachine()
{
	delete[] machineSlot;
}



int VendingMachine::getSlotCount() const
{
	return this->slotCount;
}
SnackSlot& VendingMachine::getMachineSlot(int index) const
{
	return this->machineSlot[index];
}
int VendingMachine::getAmount() const
{
	return this->amount;
}
int VendingMachine::getEmptySlots() const
{
	bool isSlotEmpty = false;

	int count = 0;
	for (int i = 0; i < slotCount; i++)
	{
		for (int j = 0; j < machineSlot[i].GetSize(); j++)
		{
			if (machineSlot[i].GetSnack(j).getName() == "")
			{
				isSlotEmpty = true;
			}
			else
			{
				isSlotEmpty = false;
				break;
			}
		}
		if (isSlotEmpty)
		{
			count++;
		}
	}
	return count;
}


void VendingMachine::setSlotCount(int slotCount)
{
	this->slotCount = slotCount;
}
void VendingMachine::addSlot(SnackSlot*& other)
{
	if (iterator == slotCount)
	{
		std::cout << "Все ячейки для слотов в автомате заполнены! Больше добавить нельзя!" << std::endl;
	}
	else
	{
		machineSlot[iterator] = *other;
		++iterator;
	}
}
void VendingMachine::setAmount(int amount)
{
	this->amount = amount;
}

void VendingMachine::buySnack(std::string name, User *&user)
{
	for (int i = 0; i < slotCount; i++)
	{
		for (int j = 0; j < machineSlot[i].GetSize(); j++)
		{
			if (machineSlot[i].GetSnack(j).getName() == name)
			{
				if (user->GetUserAmount() >= machineSlot[i].GetSnack(j).getPrice())
				{
					this->amount += machineSlot[i].GetSnack(j).getPrice();
					user->SetUserAmount(user->GetUserAmount()  - machineSlot[i].GetSnack(j).getPrice()) ;
					machineSlot[i].GetSnack(j).SetName("");
					return;
				}
				else
				{
					std::cout << "У покупателя недостаточно средств!" << std::endl;
					return;
				}
			}
		}
	}
	std::cout << "Товар с таким именем не найден!" << std::endl;
}