#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "������� �������� : ";
	cin >> x;
	bool isEven;
	if ((x & 1) == 0)
	{
		isEven = (x & 1);
		cout << isEven << endl;
		cout << "�������� " << x << " ������" << endl;
	}
	else
	{
		cout << "�������� " << x << " ��������" << endl;
	}

}