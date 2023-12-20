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
    std::cout << "������� ������ : ";
    std::cin >> height;

    if (height > 20)
    {
        std::cout << "\n������� ������� ������!\n";
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
    std::cout << "�� ����� �� ��������� :(" << std::endl;
}

/*

����� NewYearPresent - ��������� � ������������)

1. ��� �� ���� ����� - ������.

2. ���� ����������� �������, ����� �� ������ ������ � ����, � ����� ������ �� �������.

3. ��������� ����� Draw() - ��������� ���������� pixel ���������� ����, 

� �������������� ������, ������� �� ������ 20 ��������, � ����� ����� ��������� ���


*/