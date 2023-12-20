#include "Application.h"

Application::Application() : chat(new Chat()), user(new User()), isRun(true), isChatActive(false)
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "");
}

Application::~Application()
{
	delete chat;
	delete user;
}

void Application::Run()
{
	chat->setUp();
	int choise;
	std::cout << "Здравствуйте!\n";
	std::string login;
	std::string password;
	std::string name;
	while (isRun)
	{
		std::cout
			<< "Выберите действие :\n"
			<< "1. Зарегестрироваться\n"
			<< "2. Войти\n"
			<< "3. Выйти\n"
			<< "4. Очистка консоли\n"
			<< "Вводите : ";

		std::cin >> choise;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
		}

		std::cout << "\n\n";

		switch (choise)
		{
			case 1:
			{
				std::cin.ignore();
				std::cout << "Введите логин : ";
				std::cin >> login;
				std::cout << "\nВведите пароль : ";
				std::cin >> password;
				std::cout << "\nВведите имя : ";
				std::cin >> name;

				user->setLogin(login);
				user->setPassword(password);
				user->setName(name);
			
				std::mt19937 engine;

				engine.seed(std::time(nullptr));

				user->setId(engine() % 10000);

				if (chat->SignUp(*user))
				{
					Chatting();
				}
				else
				{
					std::cout << "\nТакой пользователь уже существует!\n\n";
				}

				break;

			}
			case 2:
			{
				std::cin.ignore();
				std::cout << "Введите логин : ";
				std::cin >> login;
				std::cout << "\nВведите пароль : ";
				std::cin >> password;
				user->setLogin(login);
				user->setPassword(password);

				if (chat->SignIn(*user))
				{
					Chatting();
				}
				else
				{
					std::cout << "\nТакого пользователя не существует! Зарегистрируйтесь или проверьте данные!\n\n";
				}

				break;
			}
			case 3:
			{
				isRun = false;
				break;
			}
			case 4:
			{
				system("cls");
				break;
			}
			default:
			{
				std::cout << "Ошибка! Такого пункта не существует!" << "\n\n";
				break;
			}
		}


	}

}

void Application::Chatting()
{
	isChatActive = true;
	while (isChatActive)
	{
		int chatChoise;
		std::cout << "\nВыберите действие :\n"
			<< "1. Отправить сообщение кому-то\n"
			<< "2. Отправить сообщение в общий чат\n"
			<< "3. Показать главный чат\n"
			<< "4. Показать чат с кем-то\n"
			<< "5. Secret :)\n"
			<< "6. Выйти в главное меню\n"
			<< "7. Очистить консоль\n\n"
			<< "Вводите : ";

		std::cin >> chatChoise;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
		}

		std::cout << std::endl;

		switch (chatChoise)
		{
			case 1:
			{
				std::cin.ignore();
				std::string userLogin;
				std::string msg;


				std::cout << "Список доступных получателей :" << std::endl;
				chat->printRecipients(*user);

				std::cout << "Введите логин получателя : ";
				std::getline(std::cin, userLogin);

				std::cin.ignore();

				std::cout << "Введите сообщение : ";
				std::getline(std::cin, msg);



				if (chat->sendMessage(*user, chat->makeChat(*user, userLogin), msg))
				{
					std::cout << std::endl;
				}
				else
				{
					std::cout << "Пользователь с таким логином не найден или вы пытаетесь отправить сообщение самому себе!" << std::endl;
				}
				
				break;
			}
			case 2:
			{
				std::cin.ignore();
				std::string message;

				std::cout << "Введите сообщение : ";

				std::getline(std::cin, message);

				chat->sendMessage(*user, message);

				std::cout << std::endl;

				break;
			}
			case 3:
			{
				chat->PrintChat();
				break;
			}
			case 4:
			{
				std::cin.ignore();
				std::string userLogin;
				std::cout << "Список доступных получателей :" << std::endl;
				chat->printRecipients(*user);

				std::cout << "Введите логин, чтобы получить чат : ";
				std::getline(std::cin, userLogin);

				if (chat->PrintChat(chat->makeChat(*user, userLogin)))
				{
					std::cout << std::endl;
				}
				else
				{
					std::cout << "Такого пользователя не существует или вы пытаетесь вывести чат с самим собой!" << "\n\n";
				}
				break;
			}
			case 5:
			{
				char symbol;
				std::cout << "Введите символ или цифру : ";
				std::cin >> symbol;
				
				NewYearPresent<char> a;
				a.Draw(symbol);
				break;
			}
			case 6:
			{
				isChatActive = false;
				break;
			}
			case 7:
			{
				system("cls");
				break;
			}
			default:
			{
				std::cout << "Ошибка! Такого пункта не существует!" << std::endl;
				break;
			}
		}
	}
}
