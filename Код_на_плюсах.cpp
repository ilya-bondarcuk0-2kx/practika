#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int C , F;
	cin >> C;
	F = ((C * 9) / 5) + 32;
	cout << "По Цельсию = " << C << endl;
	cout <<"По Фаренгейту = " << F << endl;
	return 0;
}