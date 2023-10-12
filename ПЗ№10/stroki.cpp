#include <iostream>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;

/* Компаратор сделан для сортировки строки по убыванию */
bool comp(const string &_1, const string &_2)
{
    if(_1.length() == _2.length())
    {
        return _1 < _2;
    }
    else
    {
        return _1.length() > _2.length();
    }
}

void sortByLength(vector<string> &words)
{
    sort(begin(words), end(words) , comp);
}

int main() {

    vector<string> words{"Tom", "Bob", "Sam", "Alice", "Kate", "Rex", "Yan", "Sara", "Bobik"};
    sortByLength(words);
    for(int i = 0; i <  words.size();i++)
    {
        cout<<words[i]<<endl;
    }
    return 0;
}

