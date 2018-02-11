/*Создать массив целых чисел размерностью N и заполнить его случайными числами от -20 до 20. Объявить два массива указателей. 
Заполнить первый из них указателями на положительные числа исходного массива, а второй – указателями на отрицательные числа.
Пользуясь массивами указателей, вывести на консоль сначала положительные, а потом отрицательные значения.*/
#include <iostream>
#include <time.h>
#define N 10
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arr[N];
	int *polPtr[N];
	int *negPtr[N];
	cout << " Исходный массив \n";
	for (int i = 0; i < N; i++)
	{
		arr[i] =rand() % 41 - 20;
		
		cout << " " << arr[i] << "  ";
	}
	cout << endl;
	int *ptr = arr;
	int **negativPtr = negPtr;
	int **positivPtr = polPtr;
	int countNeg = 0;
	int countPol = 0;
	while (ptr < arr + N)
	{
		if (*ptr < 0)
		{
			*negativPtr++ = ptr;
			countNeg++;
		}
		if (*ptr > 0)
		{
			*positivPtr++ = ptr;
			countPol++;
		}
		ptr++;
	}
	cout << " Массив на положительные числа \n";
	for (int i = 0; i < countPol; i++,*positivPtr++)
	{
		cout << " " << positivPtr << "  ";
	}
	cout << endl;
	cout << " Массив на отрицательные числа \n";
	for (int i = 0; i < countNeg; i++, *negativPtr++)
	{
		cout << " " << negativPtr << "  ";
	}
	cout << endl;
	system("pause");
}
