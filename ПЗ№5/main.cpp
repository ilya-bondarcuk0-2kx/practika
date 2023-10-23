#include <iostream>
#include"calculate.h"
int main()
{
    setlocale(LC_ALL, "");
    bool run = true;
    while (run) {
        double a = 0, b = 0;
        char choise;
        std::cout << "Введите желаемое действие \"+\", \"-\", \"*\", \"/\", \"!\", \"^\" \nили \"S\" - чтобы остановить программу \nили \"С\" - очистить консоль : ";
        std::cin >> choise;


        switch (choise)
        {
            case '+':
            {
                std::cout << "Введите два числа : ";
                std::cin >> a >> b;
                std::cout << Sum(a, b) << std::endl;
                break;
            }
            case'-':
            {
                std::cout << "Введите два числа : ";
                std::cin >> a >> b;
                std::cout << Sub(a, b) << std::endl;
                break;
            }
            case'*':
            {
                std::cout << "Введите два числа : ";
                std::cin >> a >> b;
                std::cout << Mult(a, b) << std::endl;
                break;
            }
            case'/':
            {
                std::cout << "Введите два числа : ";
                std::cin >> a >> b;
                if (b == 0)
                {
                    std::cout << "Ошибка! Делить на ноль нельзя!" << std::endl;
                    break;
                }
                std::cout << Divis(a, b) << std::endl;
                break;
            }
            case'^':
            {

                std::cout << "Введите два числа (Первое - число которое возводится в степень, второе - степень , в которую его нужно возвести): ";
                std::cin >> a >> b;
                std::cout << Power(a, b) << std::endl;
                break;

            }
            case'!':
            {
                std::cout << "Введите число : ";
                std::cin >> a;
                std::cout << Fact(a) << std::endl;
                break;
            }
            case 'S':
            {
                run = false;
                break;
            }
            case 'C':
            {
                system("cls");
                break;
            }
            default:
            {
                std::cout << "Ошибка! Такого действия не существует" << std::endl;
                break;
            }
        }
    }
}