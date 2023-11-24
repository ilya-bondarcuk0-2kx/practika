#pragma once
#include<vector>
#include"Encyclopedia.h"
#include"Journal.h"
#include"Bookshelf.h"
#include"Human.h"
#include"Client.h"
#include"Employee.h"
class Library final
{
public:
	Library();
	~Library();
	
	void addBookShelf(Bookshelf *bookshelf);
	void addClient(Client* client);
	void addEmployee(Employee *employee);

	void showBook(std::string name);
	void showEmployee(std::string surname);
	void showClient(std::string surname);
	/*void showBookOnPreferences(std::string preferneces);
	void showBookOnPreferences(std::string author, std::string preferneces)*/;
	void showAllBooks();
	void showAllEmployers();
	void showAllClients();


private:
	std::vector<Bookshelf*> bookshelf;
	std::vector<Client*> clients;
	std::vector<Employee*> employers;
};

