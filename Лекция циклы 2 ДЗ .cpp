#include <iostream>

using namespace std;

int main()
{
    int N = 10;
    int Fact = 1;
    while(N > 1)
    {
        Fact*=N;
        --N;
    }
    cout<<Fact<<endl;
}
