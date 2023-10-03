#include <iostream>
using namespace std;
int** FillDualDynamicArray(int** Matrix, const int rows, const int cols)
{
	Matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
		Matrix[i] = new int[cols];
	for (int i = 0; i < rows; i++)
	{
		for (int j(0); j < cols; j++)
			M1[i][j] = 10 + rand() % 91;
	}
}
void ShowDualDynamicArray(const int** Matrix, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "| ";
		for (int j = 0; j < cols; j++)
		{
			cout << Matrix[i][j];
			if (j < cols - 1) cout << " ";
			else cout << " |" << endl;
		}
	}
}
int** ResultOfMultDualDynamicArray(int** Matrix1, int** Matrix2,int rows,int cols)
{
	int** M3 = new int* [a];
	for (int i = 0; i < a; i++)
		M3[i] = new int[d];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < d; j++)
			M3[i][j] = 0;

	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int m = 0; m < b; m++)
				M3[i][j] += Matrix1[i][m] * Matrix2[m][j];
		}
	}
	return M3;
}
void RemoveUsedMemory(int** Matrix,int rows)
{
	for (int i = 0; i < rows; i++)  // сначала элементы строк
	{
		delete[] Matrix[i];
	}
	delete[]Matrix;
}
int main() // матрицы произвольного размера
{
	int a = 0, b = 0, c = 0, d = 0; // размерность матриц
	do
	{
		cout << "Введите размерность 1-й матрицы: ";
		cin >> a >> b;
		cout << "\nВведите размерность 2-й матрицы: ";
		cin >> c >> d;
		cout << endl;
		if (b != c)
		{
			cout << " Эти матрицы невозможно умножить!\n Нажмите Enter для повторного ввода!\n";
		}
	} while (b != c);

	int** M1 = NULL;  
	int** M2 = NULL;
	FillDualDynamicArray(M1, a, b);
	FillDualDynamicArray(M2, c, d);
	ShowDualDynamicArray(M1, a, b);
	ShowDualDynamicArray(M2, c, d);
	ResultOfMultDualDynamicArray(M1, M2,  a, d);
	RemoveUsedMemory(M1, )
}