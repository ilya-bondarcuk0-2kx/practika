#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const float Pi = 3.14159;
	int r;
	cout << "������� ������ ���������� : ";
	cin >> r;
	float C = 2 * Pi * r;
	cout << "����� ���������� ����� = " << C << endl;
}