#pragma once
#include<iostream>
template<typename T >
class NewYearPresent
{
public:

	void Draw(T pixel);


};




template<typename T>
inline void NewYearPresent<T>::Draw(T pixel)
{
    int height;
    std::cout << "Введите высоту : ";
    std::cin >> height;

    if (height > 20)
    {
        std::cout << "\nСлишком большая высота!\n";
        return;
    }
    else
    {
        std::cout << std::endl;
        for (int i = 1; i <= height; i++) {
            for (int j = 0; j < height - i; j++)
            {
                std::cout << " ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                std::cout << pixel;
            }
            std::cout << std::endl;
        }
        for (int i = 0; i < height - 1; i++) {
            std::cout << " ";
        }
        std::cout << pixel << std::endl;
    }
}

template<>
inline void NewYearPresent<std::string>::Draw(std::string pixel)
{
    std::cout << "Из строк не получится :(" << std::endl;
}

/*

Класс NewYearPresent - подарочки к наступающему)

1. Сам по себе класс - шаблон.

2. Есть спеализация затычка, чтобы не пихали строки в него, а иначе выйдет не красиво.

3. Шаблонный метод Draw() - принимает параметром pixel шаблонного типа, 

и рапспечатывает ёлочку, высотой не больше 20 пикселей, а иначе будет непонятно что


*/