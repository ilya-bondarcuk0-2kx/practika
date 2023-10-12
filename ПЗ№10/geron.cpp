#include <iostream>
#include<cmath>

using namespace std;

void geron(double a, double b, double c)
{
    double diff = (a + b) - c;
    double diff2 = (b + c ) - a;
    double diff3 = (c + a) - b;
    if(diff <= 0 || diff2 <= 0 || diff3 <= 0  || a <= 0 || b <= 0 || c <= 0 )
    {
        cout << "Данного треугольника не существует" << endl;
    }
    else
    {
        double p = (a + b + c) / 2;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Площадь треугольника = " << S;
    }
}



int main() {
    setlocale(LC_ALL,"");
    geron(4,4,4);
    return 0;
}
