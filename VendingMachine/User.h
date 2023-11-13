#pragma once
class User
{
public:
	User();
	User(int amount);

	int GetUserAmount();

	void SetUserAmount(int userAmount);
private:
	int userAmount;
};

