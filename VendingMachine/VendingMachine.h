#pragma once
#include "SnackSlot.h"
#include "User.h"
class VendingMachine
{
public:
	VendingMachine(int slotCount);

	int getEmptySlots() const;
	int getSlotCount() const;
	int getAmount() const;
	SnackSlot& getMachineSlot(int index) const;

	void addSlot(SnackSlot*& other);
	void setSlotCount(int SlotCount);
	void setAmount(int amount);
	void buySnack(std::string name, User*& user);
	

	~VendingMachine();
private:
	int slotCount;
	int iterator;
	int amount;
	SnackSlot *machineSlot;
};

