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
����� Application

1. ����������� �������� � ���� (������������ ������) ��� ���� (� ��� ��������� �����) 
� ���������� (������� � ������� � ������ - ~Application()) - ������ ������������ ������ �� ����� ����������� �������.


2. ����� Run() - �������� ��������� � ����������. � ��� ������������ ���� User Interface. ������ �������� ������� ����� ������ �����,

������ ���� �� ������ ����� ������� ������� �� �� ������, ������ ���� ��������� ����� ������������� � API (Application Programming Interface)

3. ����� Chatting() - � ���� �������� ������������� ����������, ������� ��������� � ��������� ������ switch()


4. ������ ���� - ��� ���������, ��� ���������� ���� ����������, � ��� ������� ������ isRun �  isChatActive , ������� ������ ���������� ��� �����

while()





*/