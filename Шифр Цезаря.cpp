// МаёПраект.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	bool stopLoop = true;
	char userChoise;
	string UserString;
	int step;
	cout << "Введите строку для шифрования : ";
	cin >> UserString;
	cout << "Введите шаг для шифра : ";
	cin >> step;

	
	while (stopLoop) {
		cout << "Введите действие \" C - Зашифровать строку\",\" D - расшифровать строку\" : ";
		cin >> userChoise;
		switch (userChoise)
		{
			case 'C':
			{
				for (int i = 0; UserString[i]; i++)
				{
					if (isupper(UserString[i]) && UserString[i] + step >= 90)
					{
						UserString[i] = 64 + step;
					}
					else if (isupper(UserString[i]))
					{
						UserString[i] = UserString[i] + step;
					}

					if (UserString[i] + step > 123 && UserString[i] + step > 97)
					{
						UserString[i] = 96 + step;
					}
					else if (UserString[i] >= 97) {
						UserString[i] = UserString[i] + step;
					}
				}
				stopLoop = false;
				break;
			}
			case 'D':
			{
				step *= -1;
				for (int i = 0; UserString[i]; i++)
				{
					if (isupper(UserString[i]) && UserString[i] + step > 91)
					{
						UserString[i] = 64 + step;
					}
					else if (isupper(UserString[i]))
					{
						UserString[i] = UserString[i] + step;
					}

					if (UserString[i] + step > 123 && UserString[i] + step > 97)
					{
						UserString[i] = 96 + step;
					}
					else if (UserString[i] > 97) {
						UserString[i] = UserString[i] + step;
					}
				}
				stopLoop = false;
				break;
			}
			default:
			{
				cout << "Ошибка! Введите корректные данные!" << endl;
				break;
			}
		}
	}
	cout << UserString;
}
