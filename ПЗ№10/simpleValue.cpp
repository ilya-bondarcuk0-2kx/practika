#include <iostream>


using namespace std;

void simple(int value)
{
    bool isSimple = true;

    for(int i = 2; i < value ; i++)
    {
        if( value % i == 0 )
        {
            isSimple = false;
            cout<< "No" <<endl;
            break;
        }
    }
    if(isSimple)
    {
        cout<<"Yes"<<endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    simple(59);
    return 0;
}
