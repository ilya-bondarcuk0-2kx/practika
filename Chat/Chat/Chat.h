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
 ласс Chat

1. ¬ буквальном смылсле €вл€етс€ операционной системой приложени€, но обо всем по пор€дку.



2.  оструктор устанавливает только один поток ofstream в режим работы с исключени€ми (реализаци€ в cpp файле), второй поток ifstream , 

в режиме с исключени€ми выдавал непри€тные исключени€,некоторые из которых сам способен обработать, если не ставить соответсвтующие флажки.



3. ћетод setUp() - в нем происходит выгрузка уже зарегестрированных пользователей. —истема такова - сначала поток берет файл с логинами

и записывает в вектор uLogins(сокращено от userLogins),

а далее с помощью конкатенации строк, поток выбирает файл каждого пользовател€, и записывает в вектор users. ѕредусмотрен момент с тем,

что поток может выбрать пустую строку по окончанию цикла, потому после цикла, вызываетс€ метод pop_back() что почистить ненужный элемент.


4. printRecipients() -  данный метод выводит вспомогательную информацию пользователю, 


*/