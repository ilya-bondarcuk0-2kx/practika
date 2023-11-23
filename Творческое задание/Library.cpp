#include "Library.h"


Library::Library()
{
}



Library::~Library()
{
	for (auto shelf : bookshelf)
	{
		delete shelf;
	}
	bookshelf.clear();
	for (auto client : clients)
	{
		delete client;
	}
	clients.clear();
	for (auto employee : employers)
	{
		delete employee;
	}
	employers.clear();

}


void Library::addBookShelf(Bookshelf *bookshelf)
{
	this->bookshelf.push_back(bookshelf);
}

void Library::addClient(Client* client)
{
	this->clients.push_back(client);
}
void Library::addEmployee(Employee* employee)
{
	this->employers.push_back(employee);
}




void Library::showBook(std::string &name)
{
	for (int i = 0; i < bookshelf.size(); i++)
	{
		for (int j = 0; j < bookshelf[i]->getSize(); j++)
		{
			if (bookshelf[i]->getBook(j)->getName() == name)
			{
				bookshelf[i]->getBook(j)->about();
				return;
			}
		}
	}
	std::cout << "Не найдено ни одной книги с таким именем!" << std::endl;
	return;
}

void Library::showEmployee(std::string surname)
{
	for (int i = 0; i < employers.size(); i++)
	{
		if (employers[i]->getSname() == surname)
		{
			employers[i]->getInfo();
			return;
		}
	}
	return;
}

void Library::showClient(std::string surname)
{
	for (int i = 0; i < clients.size(); i++)
	{
		if (clients[i]->getSname() == surname)
		{
			clients[i]->getInfo();
			return;
		}
	}
	return;
}

//void Library::showBook(std::string name)
//{
//	for (int i = 0; i < bookshelf.size(); i++)
//	{
//		for (int j = 0; bookshelf[i]->getSize(); j++)
//		{
//			if (bookshelf[i]->getBook(j)->getName() == name)
//			{
//				bookshelf[i]->getBook(j)->about();
//				return;
//			}
//		}
//	}
//	std::cout << "Такой книги нет в библиотеке!" << std::endl;
//}
//
//void Library::showBookOnPreferences(std::string preferneces)
//{
//	bool isPrefered = false;
//	for (int i = 0; i < bookshelf.size(); i++)
//	{
//		for (int j = 0; j < bookshelf[i]->getSize(); j++)
//		{
//		
//			if (bookshelf[i]->getBook(j)->getType() == preferneces)
//			{
//				bookshelf[i]->getBook(j)->about();
//				isPrefered = true;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	if (!isPrefered)
//	{
//		std::cout << "Не найдено ни одной книги" << std::endl;
//	}
//}
//
//void Library::showBookOnPreferences(std::string author, std::string preferneces)
//{
//
//}

void Library::showAllBooks()
{
	for (int i = 0; i < bookshelf.size(); i++)
	{
		for (int j = 0; j < bookshelf[i]->getSize(); j++)
		{
			bookshelf[i]->getBook(j)->about();
		}
	}
	return;
}

void Library::showAllEmployers()
{
	for (int i = 0; i < employers.size(); i++)
	{
		employers[i]->getInfo();
	}
	return;
}

void Library::showAllClients()
{
	for (int i = 0; i < clients.size(); i++)
	{
		clients[i]->getInfo();
		
	}
	return;
}

