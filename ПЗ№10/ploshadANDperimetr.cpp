#include <iostream>
#include<string>
#include<cmath>
#define  PI 3.14

using namespace std;

void area(string name, int value)
{
    if(name == "Круг")
    {
        cout<< "Площадь круга = " << ceil(PI * (value * value)) << endl;
    }
    if(name == "Квадрат")
    {
        cout << "Площадь квадрата = " << value * value << endl;
    }
}
void perimetr(string name, int value)
{
    if(name == "Круг")
    {
        cout<< "Периметр круга = " << ceil(2 * PI * value) << endl;
    }
    if(name == "Квадрат")
    {
        cout << "Периметр квадрата = " << value * 4 << endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    area("Круг", 3);
    perimetr("Круг", 3);
    area("Квадрат", 2);
    perimetr("Квадрат", 2);
    return 0;
}
