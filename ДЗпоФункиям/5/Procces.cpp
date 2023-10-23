#include"Procces.h"
#include<iostream>
void proccesArray(int* arr, int size, int(*callback_ptr)(int))
{
	for (int i = 0; i < size; i++)
	{
		std::cout <<"|" << callback_ptr(arr[i]) << "|\t";

	}

}