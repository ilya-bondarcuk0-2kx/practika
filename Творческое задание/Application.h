#pragma once
#include"Library.h"
#include"Client.h"
#include"Employee.h"
#include"Book.h"
#include"Bookshelf.h"
#include"Encyclopedia.h"
#include"Journal.h"


class Application final
{
public:
	Application();
	~Application();
	static void run();
private:
	static bool programRun;
	static Library *library;
	static Employee* employee1;
	static Employee* employee2;
	static Client* client1;
	static Client* client2;
	static Book* book1;
	static Book* book2;
	static Encyclopedia* enciclop;
	static Journal* journal;
	static Bookshelf* bookShelf;
};

