#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int C , F;
	cin >> C;
	F = ((C * 9) / 5) + 32;
	cout << "�� ������� = " << C << endl;
	cout <<"�� ���������� = " << F << endl;
	return 0;
}