#include "Application.h"


Library* Application::library = new Library();
Employee* Application::employee1 = new Employee("������","���������","��������", 8998, 22, 2, "������������ �����������");
Employee* Application::employee2 = new Employee("������", "�����", "�����������", 8780, 30, 6, "������� ������������");
Client* Application::client1 = new Client("����", "���������", "����������", 898, 18, "��������");
Client* Application::client2 = new Client("����", "������", "����������", 898, 18, "�����");
Book* Application::enciclop = new Encyclopedia("������ ������", "����������� ������������", "������������", "������������� �������� - ��� ������������ �����������...", 896, 9.8, "��������");
Book* Application::journal = new Journal("���", "����� � ��������", "������ � ��������", "����� ��� ����?!" , 70, 10, "���");
Bookshelf* Application::bookShelf = new Bookshelf();
Book* Application::book1 = new Book("����� ������", "�������� � ��������� ���������", "��������", "����������� ��������� �� �����, ������� ��� ������ ����� ���������, �������� �� �� ���.", 288, 8.8);
Book* Application::book2 = new Book("����� �����-����", "������� � ������� ������", "��������", "��, ������� ��� �� �����, � ���� �����, ����� ���� ���� ��������� ����� �������!", 384, 7.9);
bool Application::programRun = false;



Application::Application()
{
	system("chcp 1251");
	system("CLS");
	setlocale(LC_ALL, "ru");
	bookShelf->AddBook(book1);
	bookShelf->AddBook(book2);
	bookShelf->AddBook(enciclop);
	bookShelf->AddBook(journal);
	
	library->addBookShelf(bookShelf);
	library->addClient(client1);
	library->addClient(client2);
	library->addEmployee(employee1);
	library->addEmployee(employee2);
}
void Application::run()
{
	std::string choise_;
	std::cout << "������������! ��� ������������ ����� ������ ����������!\n";
	std::cout << "����� � ����������? ������� \"��\" ��� \"���\"" << "\n";
	std::cin >> choise_;
	programRun = (choise_ == "��") ? true : false;

	while (programRun)
	{
		int choise;
		std::cout <<
			"�������� �������� ����� \n" <<
			"1)������� ��� ����� - ������� 1\n"
			"2)������� ���� �������� - ������� 2\n"
			"3)������� ���� ���������� - ������� 3\n"
			"4)������� ����� - ������� 4\n"
			"5)������� ������� - ������� 5\n"
			"6)������� ��������� - ������� 6\n"
			"7)����� - ������� 7\n"
			"8)�������� ������� - ������� 8\n"
			"������� : ";
		std::cin >> choise;

		/*if (choise == 1)
		{
			library->showAllBooks();
			std::cout << std::endl;
		}
		else if (choise == 2)
		{
			library->showAllClients();
			std::cout << std::endl;
		}
		else if (choise == 3)
		{
			library->showAllEmployers();
			std::cout << std::endl;
		}
		else if (choise == 4)
		{
			std::cin.ignore();
			std::cin.clear();
			std::string name;
			std::cout << "������� �������� �����: ";
			std::getline(std::cin, name);
			library->showBook(name);
			std::cout << std::endl;
		}
		else if (choise == 5)
		{
			std::cin.ignore();
			std::cin.clear();
			std::string surname;
			std::cout << "������� ������� �������: ";
			std::getline(std::cin, surname);
			library->showClient(surname);
			std::cout << std::endl;
		}
		else if (choise == 6)
		{
			std::string surname;
			std::cout << "������� ������� ���������";
			std::getline(std::cin, surname);
			library->showEmployee(surname);
			std::cout << std::endl;
		}
		else if (choise == 7)
		{
			programRun = false;
		}
		else if (choise == 8)
		{
			system("CLS");
		}
		else
		{
			std::cerr << "������! ������ ������ �� ����������!" << std::endl;
		}*/
		switch (choise)
		{
			case 1:
			{
				library->showAllBooks();
				std::cout << std::endl;
				break;
			}
			case 2:
			{
				library->showAllClients();
				std::cout << std::endl;
				break;
			}
			case 3:
			{
				library->showAllEmployers();
				std::cout << std::endl;
				break;
			}
			case 4:
			{
				std::cin.ignore();
				std::cin.clear();
				std::string name;
				std::cout << "������� �������� �����: ";
				std::getline(std::cin, name);
				library->showBook(name);
				std::cout << std::endl;
				break;
			}
			case 5:
			{
				std::cin.ignore();
				std::cin.clear();
				std::string surname;
				std::cout << "������� ������� �������: ";
				std::getline(std::cin, surname);
				library->showClient(surname);
				std::cout << std::endl;
				break;
			}
			case 6:
			{
				std::cin.ignore();
				std::cin.clear();
				std::string surname;
				std::cout << "������� ������� ���������: ";
				std::getline(std::cin, surname);
				library->showEmployee(surname);
				std::cout << std::endl;
				break;
			}
			case 7:
			{
				programRun = false;
				break;
			}
			case 8:
			{
				system("CLS");
				break;
			}
			default:
			{
				std::cerr << "������! ������ ������ �� ����������!" << std::endl;
				break;
			}
		}




	}
}
Application::~Application()
{
	std::cout << "�� ����� �� ����������" << std::endl;
	delete library;
}