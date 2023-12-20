#include "Chat.h"

Chat::Chat() 
{
	writer.exceptions(std::ofstream::badbit | std::ofstream::failbit);
}

Chat::~Chat()
{
	
}


void Chat::setUp()
{
	reader.open("usersData/usersData.txt");
	std::string uNameBuffer;
	
	User tmp;

	if (reader.is_open())
	{
		while (!reader.eof())
		{
			uNameBuffer = "";
			std::getline(reader, uNameBuffer);
			if (uNameBuffer != "")
			{
				uLogins.push_back(uNameBuffer);
			}
		}

		

		reader.close();

		
		for (auto& item : uLogins)
		{
			reader.open("users/" + item + ".txt");

			if (reader.is_open())
			{

				reader >> tmp;
				users.push_back(tmp);

			}
			else
			{
				std::cout << "Неполадки с загрузкой данных пользователей" << std::endl;
			}
			
			reader.close();
		}
	}
	

}

void Chat::printRecipients(User& user)
{
	std::cout << std::endl;
	for (auto& i : users)
	{
		if (user.getLogin() != i.getLogin())
		{
			std::cout << i.getLogin() << std::endl;
		}
	}

}

std::string Chat::makeChat(User &user,std::string& login)
{
	if (user.getLogin() == login)
	{
		return "";
	}

	for (auto& item : users)
	{
		if (login == item.getLogin())
		{

			try
			{
				std::string strId = "[" + std::to_string(user.getId() * item.getId()) + "]id";
				writer.open("Chats/chat_" + strId + ".txt", std::ofstream::app);

				

				writer.close();
				return "Chats/chat_" + strId + ".txt";
			}
			catch (std::ofstream::failure& ex)
			{
				writer.close();
			}

			writer.close();
		}
	}
	
	return "";
}

void Chat::sendMessage(User& user,const std::string& msg)
{
	try
	{
		writer.open("MainChat/MainChat.txt", std::ofstream::app);
		writer << user.getName() + ": " + msg + "\n\n";
	}
	catch (std::ofstream::failure ex)
	{
		std::cout << ex.what() << std::endl;
		writer.close();
	}

	if (writer.is_open())
	{
		writer.close();
	}

}

bool Chat::sendMessage(User& user,const std::string& path, const std::string& msg)
{
	try
	{
		writer.open(path.c_str(), std::ofstream::app);

		writer << user.getName() + ": " + msg + "\n\n";
	}
	catch (std::ofstream::failure ex)
	{
		return false;
	}

	if (writer.is_open())
	{
		writer.close();
	}

	return true;
}




bool Chat::SignIn(User& user)
{

	for (auto& item : users)
	{
		if (user.getLogin() == item.getLogin() && user.getPassword() == item.getPassword())
		{
			user.setName(item.getName());
			user.setId(item.getId());
			return true;
		}
	}

	return false;
}

bool Chat::SignUp(User& user)
{
	try 
	{
		for (auto& item : uLogins)
		{
			if (user.getLogin() == item)
			{
				return false;
			}
		}

		
		writer.open("users/" + user.getLogin() + ".txt");

		writer << user;

		users.push_back(user);

		uLogins.push_back(user.getLogin());

		writer.close();

		writer.open("usersData/usersData.txt", std::ofstream::app);

		writer << user.getLogin() << "\n";

		

	}
	catch (std::ofstream::failure& ex)
	{
		std::cout << ex.what() << std::endl;
		writer.close();
		return false;
	}
	if (writer.is_open())
	{
		writer.close();
	}
	return true;
}

bool Chat::PrintChat()
{
	std::string msgBuffer;


	
	reader.open("MainChat/MainChat.txt");
		
	if (reader.is_open())
	{

		std::cout << "-------------------------------- [Главный чат]" << std::endl;


		while (!reader.eof())
		{
			if (reader.eof())
			msgBuffer = "";
			std::getline(reader, msgBuffer);
			std::cout<< "\n\n" << msgBuffer ;
			
		}

		std::cout << "--------------------------------" << std::endl<<std::endl;
	}
	else
	{
		reader.close();
		return false;
	}


	if (reader.is_open())
	{
		reader.close();
	}
	return true;
}

bool Chat::PrintChat(const std::string& path)
{
	std::string msgBuffer;

	reader.open(path.c_str());
	

	if (reader.is_open())
	{

		std::cout << "-------------------------------- [" + path + "]" << std::endl;


		while (!reader.eof())
		{
			if (reader.eof())
				msgBuffer = "";
			std::getline(reader, msgBuffer);
			std::cout << "\n\n" << msgBuffer;

		}

		std::cout << "--------------------------------" << std::endl << std::endl;
	}
	else
	{
		reader.close();
		return false;
	}

	if (reader.is_open())
	{
		reader.close();
	}
	return true;
}
