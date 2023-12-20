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

/*
Класс Application

1. Конструктор выделяет в куче (динамической памяти) два поля (о них поговорим позже) 
и деструктор (функция с тильдой в начале - ~Application()) - чистит динамическую память во время уничтожения объекта.


2. Метод Run() - приводит программу в исполнение. В нем сосредоточен весь User Interface. Запуск операций ведется через данный класс,

однако чего то такого кроме вызовов функций он не делает, своего рода посредник между пользователем и API (Application Programming Interface)

3. Метод Chatting() - в него вынесены повторяющиеся инструкции, которые вызваются в различных кейсах switch()


4. Четыре поля - два указателя, для облегчения веса приложения, и два булевых флажка isRun и  isChatActive , которые служат остановкой для цикла

while()





*/