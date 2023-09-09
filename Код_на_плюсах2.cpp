#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 10;
	a++;
	a -= 3;
	a %= 2;
	cout << a << endl;
}