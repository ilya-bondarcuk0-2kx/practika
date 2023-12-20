#pragma once
#include"Chat.h"
#include"NewYearPresent.h"
#include"Windows.h"
#include<random>
#include<ctime>
class Application final
{
public:


	Application();
	~Application();
	void Run();

	void Chatting();


private:
	Chat* chat;
	User* user;
	
	bool isRun;
	bool isChatActive;

};

