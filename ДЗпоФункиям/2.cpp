#include <iostream>


using namespace std;

double myltiplyOrAdd( double value, double value2, bool add = true)
{
    if(add)
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
    cout<<myltiplyOrAdd(3,2)<<endl;
    return 0;
}
