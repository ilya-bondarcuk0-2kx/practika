#include <iostream>

using namespace std;

int main()
{
    char b;
    cout<<"Введите действие(+,-,*,/,!,^) : ";
    cin>>b;
    switch(b)
    {
        case '+':
        {
        int a,b;
        cout<<"Введите числа  : ";
        cin>>a>>b;
        cout<<a+b<<endl;
        
        break;
        }
        case'-':
        {
        int a,b;
        cout<<"Введите числа  : ";
        cin>>a>>b;
        cout<<a-b<<endl;
        break;
        }
        case'*':
        {
        int a,b;
        cout<<"Введите числа  : ";
        cin>>a>>b;
        cout<<a*b<<endl;
        break;
        }
        case'/':
        {
        int a,b;
        cout<<"Введите числа  : ";
        cin>>a>>b;
        if(b==0)
        {
            cout<<"Ошибка! Деление на ноль невозможно!"<<endl;
        }
        cout<<(float)a/(float)b<<endl;
        break;
        }
        case'^':
        {
            int a;
            int expon;
            int result=1;
            cout<<"Введите число и степень : ";
            cin>>a>>expon;
            for(int i=0;i<expon;i++)
            {
                result*=a;
            }
            cout<<result<<endl;
            break;
            
        }
        case'!':
        {
            int a;
            int Fact = 1;
            cout<<"Введите число : ";
            cin>>a;
            if(a == 1 && a==0)
            {
                Fact = 1;
            }
            else
            {
            for(int i=1;i<=a;i++)
            {
                Fact*= i;
            }
            cout<<Fact<<endl;
            }
        }
        break;
        default:
        {
        cout<<"Ошибка! Такого действия не существует"<<endl;
        break;
        }
    }
}
