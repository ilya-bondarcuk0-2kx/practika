#include <iostream>
	using namespace std;
void FillDualDynamicArray(int** matrix, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
		matrix[i] = new int[cols];
	for (int i = 0; i < rows; i++)
	{
		for (int j(0); j < cols; j++)
			matrix[i][j] = 10 + rand() % 91;
	}
	
}
void ShowDualDynamicArray(int** matrix, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "| ";
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j];
			if (j < cols - 1) cout << " ";
			else cout << " |" << endl;
		}
	}
	cout << endl;
}
void ResultOfMultDualDynamicArray(int **matrix1, int** matrix2, int** resultMatrix, int rows, int cols2, int rows1)
{
	for (int i = 0; i < rows; i++)
	{
		resultMatrix[i] = new int[cols2];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			resultMatrix[i][j] = 0;
		}
	}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			for (int m = 0; m < rows1; m++)
				resultMatrix[i][j] += matrix1[i][m] * matrix2[m][j];
		}
	}
}
void RemoveUsedMemory(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)  // сначала элементы строк
	{
		delete[] matrix[i];
	}
	delete[]matrix;
	cout << "\nПамять очищена" << endl;
}
int main() // матрицы произвольного размера
{
	setlocale(LC_ALL, "");
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

	int **M1 = new int*[a];
	int **M2 = new int*[c];
	int **M3 = new int*[a];
	FillDualDynamicArray(M1, a, b);
	FillDualDynamicArray(M2, c, d);
	ShowDualDynamicArray(M1, a, b);
	ShowDualDynamicArray(M2, c, d);
	ResultOfMultDualDynamicArray(M1, M2,M3, a, d, c);
	ShowDualDynamicArray(M3, a, d);
	RemoveUsedMemory(M1, a);
	RemoveUsedMemory(M2, c);
	RemoveUsedMemory(M3, a);
}
