/*Двумерный массив размерностью N строк на M столбцов заполнить случайными целыми числами от -10 до 10. 
Сформировать массив указателей на начало каждой строки двумерного массива.
Отсортировать этот массив указателей так, чтобы первые элементы строк оказались в порядке возрастания (сам двумерный массив не изменяется, меняется только массив указателей).
Вывести строки двумерного массива в полученном порядке.*/
#include <iostream>
#include <time.h>
#define ROW 5
#define COL 4
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int arr[ROW][COL];
	srand(time(0));
	int *ptr =arr[0];
	cout << " Исходный массив \n";
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++, ptr++)
		{
			*ptr = rand() % 21 - 10;
			printf(" %3d ", *ptr);
		}
		cout << endl;
	}
	int *masPtr[ROW];
	ptr = arr[0];
	int i = 0;
	while (ptr < arr[0] + ROW * COL)
	{
		masPtr[i++] = ptr;
		ptr += COL;
	}
	for (int k = ROW - 1; k > 0; k--)
	{
		for (int i = 0; i < k; i++)
		{
			if (*masPtr[i] > *masPtr[i + 1])
			{
				int *tmp;
				tmp = masPtr[i];
				masPtr[i] = masPtr[i + 1];
				masPtr[i + 1] = tmp;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout <<" "<< *masPtr[i] << endl;
	}
	ptr = arr[0];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++, ptr++)
		{
			printf(" %3d ", *ptr);
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
}
