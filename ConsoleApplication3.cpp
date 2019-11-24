#include "windows.h"
#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[10];
	int b=0, x=0;
	double ser, m = 0;
	int dob;
	cout << "Введите значения массива:" << endl;
	for (int i = 1; i < 9; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > 0)
		{
			b++;
			m+=a[i];
		}
	}
	ser = m / b;
	cout << "Среденее статистическое всех положительных значений=" << ser << endl;
	int t;
	int max = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			t = i;
		}
	}
	cout << "Максимальное значение:" << max << endl;
	int min = a[0];
	int c;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			c = i;
		}
	}
	cout << "Минимальное значение:" << min << endl;
	dob = c * t;
	cout << "Произведение индексов максимального и минимального значений:" << dob << endl;
	system("pause");
	return 0;
}
