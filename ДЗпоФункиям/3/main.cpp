#include <iostream>
#include"countOdd.h"
int main()
{
    const int size = 10;
    int arr[size]{ 2,2,2,2,5,6,7,8,9,10};
    std::cout << CountOdd(arr, size) << std::endl;
}

