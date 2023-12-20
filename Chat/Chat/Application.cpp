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
	std::cout << "������������!\n";
	std::string login;
	std::string password;
	std::string name;
	while (isRun)
	{
		std::cout
			<< "�������� �������� :\n"
			<< "1. ������������������\n"
			<< "2. �����\n"
			<< "3. �����\n"
			<< "4. ������� �������\n"
			<< "������� : ";

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
				std::cout << "������� ����� : ";
				std::cin >> login;
				std::cout << "\n������� ������ : ";
				std::cin >> password;
				std::cout << "\n������� ��� : ";
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
					std::cout << "\n����� ������������ ��� ����������!\n\n";
				}

				break;

			}
			case 2:
			{
				std::cin.ignore();
				std::cout << "������� ����� : ";
				std::cin >> login;
				std::cout << "\n������� ������ : ";
				std::cin >> password;
				user->setLogin(login);
				user->setPassword(password);

				if (chat->SignIn(*user))
				{
					Chatting();
				}
				else
				{
					std::cout << "\n������ ������������ �� ����������! ����������������� ��� ��������� ������!\n\n";
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
				std::cout << "������! ������ ������ �� ����������!" << "\n\n";
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
		std::cout << "\n�������� �������� :\n"
			<< "1. ��������� ��������� ����-��\n"
			<< "2. ��������� ��������� � ����� ���\n"
			<< "3. �������� ������� ���\n"
			<< "4. �������� ��� � ���-��\n"
			<< "5. Secret :)\n"
			<< "6. ����� � ������� ����\n"
			<< "7. �������� �������\n\n"
			<< "������� : ";

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


				std::cout << "������ ��������� ����������� :" << std::endl;
				chat->printRecipients(*user);

				std::cout << "������� ����� ���������� : ";
				std::getline(std::cin, userLogin);

				std::cin.ignore();

				std::cout << "������� ��������� : ";
				std::getline(std::cin, msg);



				if (chat->sendMessage(*user, chat->makeChat(*user, userLogin), msg))
				{
					std::cout << std::endl;
				}
				else
				{
					std::cout << "������������ � ����� ������� �� ������ ��� �� ��������� ��������� ��������� ������ ����!" << std::endl;
				}
				
				break;
			}
			case 2:
			{
				std::cin.ignore();
				std::string message;

				std::cout << "������� ��������� : ";

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
				std::cout << "������ ��������� ����������� :" << std::endl;
				chat->printRecipients(*user);

				std::cout << "������� �����, ����� �������� ��� : ";
				std::getline(std::cin, userLogin);

				if (chat->PrintChat(chat->makeChat(*user, userLogin)))
				{
					std::cout << std::endl;
				}
				else
				{
					std::cout << "������ ������������ �� ���������� ��� �� ��������� ������� ��� � ����� �����!" << "\n\n";
				}
				break;
			}
			case 5:
			{
				char symbol;
				std::cout << "������� ������ ��� ����� : ";
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
				std::cout << "������! ������ ������ �� ����������!" << std::endl;
				break;
			}
		}
	}
}
