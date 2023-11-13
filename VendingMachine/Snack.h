#pragma once
#include<string>

class Snack
{
public:
	Snack();
	Snack(int price, int callories);
	Snack(std::string name);
	Snack(std::string name, int price, int callories);
	std::string getName() const;
	int getPrice() const;
	int getCallories() const;

	void SetName(std::string name);
	void SetPrice(int price);
	void SetCallories(int callories);

	bool operator == (Snack &other);
	bool operator !=(Snack& other);
private:
	std::string name;
	int price;
	int callories;
};

