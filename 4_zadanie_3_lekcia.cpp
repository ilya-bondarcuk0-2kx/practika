#include <iostream>
#define cubeof(X) X*X*X

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int X = cubeof(10);
	cout << X << endl;
	return 0;
}