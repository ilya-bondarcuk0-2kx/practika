#include "calculate.h"
#include<iostream>


int Sum(int a, int b)
{
	return a + b;
}


int Sub(int a, int b)
{
	return a - b;
}


int Mult(int a, int b)
{
	return a * b;
}


double Divis(int a, int b)
{
	if (b == 0)
	{
		std::cout << "Ошибка! Делить на ноль нельзя!" << std::endl;
		return 0;
	}
	if(a % b != 0)
		return static_cast<double>(a) / static_cast<double>(b);
	return a / b;
}


int Fact(int a)
{
	int factorial = 1;
	for (int i = 1; i <= a; i++)
	{
		factorial *= i;
	}
	return factorial;
}

int Power(int a, int b)
{
	int pow = a;
	for (int i = 1; i < b; i++)
	{
		a *= pow;
	}
	return a;
}


