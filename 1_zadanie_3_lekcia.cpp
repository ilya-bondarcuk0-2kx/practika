#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "Введите значение : ";
	cin >> x;
	bool powerOf2;
	if ((x & (x - 1)) == 0)
	{
		powerOf2 = (x & (x - 1));
		cout << powerOf2 << endl;
		cout << "Значение " << x << " является степенью 2-ки" << endl;
	}
	else
	{
		cout << "Значение " << x << " не является степенью 2-ки" << endl;
	}

}