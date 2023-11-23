#pragma once
#include"Human.h"
class Client final : public Human
{
public:
	Client();
	Client(std::string name, std::string sname, std::string patr, int tnumber, int age, std::string prefernces);
	~Client() override;


	void getInfo() override;
	std::string getPreferences() const;

	/*void readABook(IBook* book) override;*/
private:
	std::string preferences;
};

