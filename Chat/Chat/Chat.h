#pragma once
#include"User.h"
#include<fstream>
#include<iostream>
#include<vector>


class Chat
{
public:


	Chat();




	void setUp();

	void printRecipients(User &user);

	std::string makeChat(User& user,std::string& login);

	void sendMessage(User& user,const std::string& msg);

	bool sendMessage(User& user,const std::string& path, const std::string& msg);

	bool SignIn(User& user);



	bool SignUp(User& user);


	bool PrintChat();
	bool PrintChat(const std::string& login);


private:

	
	std::vector<std::string> uLogins;
	std::vector<User> users;
	std::ifstream reader;
	std::ofstream writer;

};

/*
����� Chat

1. � ���������� ������� �������� ������������ �������� ����������, �� ��� ���� �� �������.



2. ���������� ������������� ������ ���� ����� ofstream � ����� ������ � ������������ (���������� � cpp �����), ������ ����� ifstream , 

� ������ � ������������ ������� ���������� ����������,��������� �� ������� ��� �������� ����������, ���� �� ������� ��������������� ������.



3. ����� setUp() - � ��� ���������� �������� ��� ������������������ �������������. ������� ������ - ������� ����� ����� ���� � ��������

� ���������� � ������ uLogins(��������� �� userLogins),

� ����� � ������� ������������ �����, ����� �������� ���� ������� ������������, � ���������� � ������ users. ������������ ������ � ���,

��� ����� ����� ������� ������ ������ �� ��������� �����, ������ ����� �����, ���������� ����� pop_back() ��� ��������� �������� �������.


4. printRecipients() -  ������ ����� ������� ��������������� ���������� ������������, 


*/