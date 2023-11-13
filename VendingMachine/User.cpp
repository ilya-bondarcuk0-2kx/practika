#include "User.h"
User::User()
{
	userAmount = 1000;
}
User::User(int userAmount)
{
	this->userAmount = userAmount;
}
int User::GetUserAmount()
{
	return this->userAmount;
}

void User::SetUserAmount(int userAmount)
{
	this->userAmount = userAmount;
}