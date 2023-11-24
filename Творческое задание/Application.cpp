#include "Application.h"


Library* Application::library = new Library();
Employee* Application::employee1 = new Employee("Максим","Иванченко","Игоревич", 8998, 22, 2, "Библиотекарь консультант");
Employee* Application::employee2 = new Employee("Андрей", "Луков", "Анатлоьевич", 8780, 30, 6, "Старший библиотекарь");
Client* Application::client1 = new Client("Илья", "Бондарчук", "Михайлович", 898, 18, "Детектив");
Client* Application::client2 = new Client("Вика", "Лесова", "Генадиевна", 898, 18, "Роман");
Book* Application::enciclop = new Encyclopedia("Любовь Орлова", "Медицинская энциклопедия", "Энциклопедия", "Хирургическая операция - это механическое воздейсвтие...", 896, 9.8, "Медицина");
Book* Application::journal = new Journal("Лев", "Тошка и компания", "Журнал о животных", "ПАНДА ИЛИ ЕНОТ?!" , 70, 10, "Лев");
Bookshelf* Application::bookShelf = new Bookshelf();
Book* Application::book1 = new Book("Агата Кристи", "Убийство в Восточном Экспрессе", "Детектив", "Невозможное случиться не может, поэтому оно должно стать возможным, несмотря ни на что.", 288, 8.8);
Book* Application::book2 = new Book("Артур Конан-Дойл", "Записки о Шерлоке Холмсе", "Детектив", "Ах, сколько зла на свете, и хуже всего, когда злые дела совершает умный человек!", 384, 7.9);
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
	std::cout << "Здравствуйте! Вас приветствует самая лучшая Библиотека!\n";
	std::cout << "Войти в библиотеку? Введите \"Да\" или \"Нет\"" << "\n";
	std::cin >> choise_;
	programRun = (choise_ == "Да") ? true : false;

	while (programRun)
	{
		int choise;
		std::cout <<
			"Выберите желаемую опцию \n" <<
			"1)Вывести все книги - введите 1\n"
			"2)Вывести всех клиентов - введите 2\n"
			"3)Вывести всех работников - введите 3\n"
			"4)Вывести книгу - введите 4\n"
			"5)Вывести клиента - введите 5\n"
			"6)Вывести работника - введите 6\n"
			"7)Выйти - введите 7\n"
			"8)Очистить консоль - введите 8\n"
			"Вводите : ";
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
			std::cout << "Введите название книги: ";
			std::getline(std::cin, name);
			library->showBook(name);
			std::cout << std::endl;
		}
		else if (choise == 5)
		{
			std::cin.ignore();
			std::cin.clear();
			std::string surname;
			std::cout << "Введите фамилию клиента: ";
			std::getline(std::cin, surname);
			library->showClient(surname);
			std::cout << std::endl;
		}
		else if (choise == 6)
		{
			std::string surname;
			std::cout << "Введите фамилию работника";
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
			std::cerr << "Ошибка! Такого пункта не существует!" << std::endl;
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
				std::cout << "Введите название книги: ";
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
				std::cout << "Введите фамилию клиента: ";
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
				std::cout << "Введите фамилию работника: ";
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
				std::cerr << "Ошибка! Такого пункта не существует!" << std::endl;
				break;
			}
		}




	}
}
Application::~Application()
{
	std::cout << "Вы вышли из библиотеки" << std::endl;
	delete library;
}