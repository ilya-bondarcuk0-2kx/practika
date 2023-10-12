#include <iostream>


using namespace std;

double myltiplyOrAdd(bool action , double value, double value2)
{
    if(action)
    {
       return value + value2;
    }
    else
    {
        return value * value2;
    }
}
int main() {
    setlocale(LC_ALL, "");
    cout<<myltiplyOrAdd(true,2,3)<<endl;
    return 0;
}
