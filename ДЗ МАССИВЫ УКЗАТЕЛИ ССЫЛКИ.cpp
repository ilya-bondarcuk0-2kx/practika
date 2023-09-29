#include<iostream>

using namespace std;
int main()
{
//1_________________________________________
	/*int array[7]{ 2,3,4,5,2,8,10 };
	for (int i = 0; i < 7; i++) 
	{
		cout << array[i] << " ";
	}*/
//2_________________________________________
	/*int sum = 0;
	int arr[]{ 500, 4,24,15,100,105 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
	sum = 0;
	int a = 0;
	while ( a < sizeof(arr) / sizeof(arr[0]))
	{
		sum += arr[a];
		a++;
	}
	cout << sum << endl;*/

//3_________________________________________

	/*int arr[5]{ 6,10,7,3,1 };
	int userNumber, count = 0;
	cin >> userNumber;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % userNumber == 0)
		{
			++count;
		}
	}
	cout<<count<<endl;*/

//4_________________________________________

	/*int arr[]{ 5,4,3,4,9 };
	int min = arr[0];
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << min << endl;*/

//5_________________________________________

	/*int arr[]{ 5,4,3,4,9 };
	int min = arr[0], max = arr[0];
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << max - min << endl;
	return 0;*/

//6_________________________________________

	/*int arr[]{ 5,4,3,4,9 };
	int max = arr[0];
	int temp;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			temp = i;
		}
	}
	cout << temp << endl;*/

//7_________________________________________

	/*int size = 5;
	int* a = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < size/2; i++)
	{
		int temp;
		temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	delete[] a;
	}*/



//8_________________________________________


	/*char stroka[]{ "AaBbCcDdEeFfGgggggg"};
	int count = 0;
	for (int i = 0; i < strlen(stroka); i++)
	{
		if (isupper(stroka[i]))
		{
			++count;
		}
	}
	cout << count << endl;*/

//9_________________________________________

	//char stroka[]{ "Aaa1323#aa" };
	//char key = 'A';
	//int count = 0;
	//for (int i = 0; i < strlen(stroka); i++)
	//{
	//	if (stroka[i] == key)
	//	{
	//		++count;
	//	}
	//}
	//cout << count << endl;

//10_________________________________________


	/*char stroka[]{ "aaaabbbbccccdddd" };
	for(int i = 0;i<strlen(stroka);i++)
	{
		stroka[i] = ((int)stroka[i] - 32);
		
	}
	cout << stroka;*/


}