#include <iostream>
#include <algorithm>
using namespace std;

int maximin(int** arr, const int rows , const int sizes[], const int size)
{
    int min_row;
    int saveNumbers[size];
    for(int i = 0; i < rows;i++)
    {
        min_row = arr[i][0];
        for(int j = 0;j < sizes[i];j++)
        {

                if(min_row > arr[i][j])
                {
                    min_row = arr[i][j];
                }
        }
        saveNumbers[i] = min_row;
    }
    int maximin  = saveNumbers[0];

    for(int i = 0; i < size;i++)
    {
        for(int j = 1; j < size ;j++)
        {
            if(maximin < saveNumbers[j])
            {
                maximin = saveNumbers[j];
            }
        }
    }
    return maximin;
}

int main() {
    setlocale(LC_ALL, "");
    int rows = 5, cols;
    const int size = 5;
    int sizes[size]{1, 5, 4, 7, 9};
    int **arr = new int * [rows];
    for(int i = 0; i < rows;i++)
    {
        arr[i] = new int [sizes[i]];
    }
    for(int i = 0; i < rows ; i++)
    {
        for(int j = 0; j < sizes[i];j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<< "Максимин = " <<maximin(arr,rows,sizes, size) << endl;

    for(int i = 0; i < rows ;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
