#include <iostream>
#include"Procces.h"
#include"callback.h"
int main()
{
	
	const int SIZE = 10;
	int arr[SIZE]{ 0,1,-6,87,-4,-7,9,11,-34,2 };


	std::cout << "Default : ";
	proccesArray(arr, SIZE, callback_index);

	std::cout << "\n\n\nBy mod : ";
	proccesArray(arr, SIZE, callback_mod);

}

