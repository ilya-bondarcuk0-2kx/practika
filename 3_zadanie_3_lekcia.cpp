#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const float Pi = 3.14159;
	int r;
	cout << "¬ведите радиус окружности : ";
	cin >> r;
	float C = 2 * Pi * r;
	cout << "ƒлина окружности равна = " << C << endl;
}