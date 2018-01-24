#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(NULL);
	cout.precision(5);

	int N, exit;
	do
	{
		cout << "введите номер задания: ";
		cin >> N;
		cout << endl;
		switch (N)
		{
		case 1:
		{
			/*1.	Дан массив. Вывести на экран сначала его неотрицательные элементы, затем отрицательные*/
			int a[10];
			for (int i = 0;i < 10;i++)
			{
				a[i] = -5 + rand() % 10;
			}
			for (int i = 0;i < 10;i++)
			{
				if (a[i] >= 0)
					cout << i << " - " << a[i] << endl;
			}
			for (int i = 0;i < 10;i++)
			{
				if (a[i] < 0)
					cout << i << " - " << a[i] << endl;
			}
		}
		break;
		case 2:
		{
			/*2.	В массиве хранится информация о количестве побед, одержанных 20 футбольными командами. Определить номера команд, имеющих меньше трех побед.*/
			int a[20];
			for (int i = 0;i < 20;i++)
			{
				a[i] = 0 + rand() % 10;
			}
			for (int i = 0;i < 20;i++)
			{
				if (a[i] > 3)
					cout << i << " - " << a[i] << endl;
			}
		}
		break;
		case 3:
		{
			/*3.	Ввести массив, состоящий из 14 элементов целого типа. Найти количество элементов четных по значению.*/
			int a[14];
			for (int i = 0;i < 14;i++)
			{
				a[i] = 0 + rand() % 15;
			}
			for (int i = 0;i < 14;i++)
			{
				if ((a[i] % 2 == 0) && (a[i] != 0))
					cout << i << " - " << a[i] << endl;
			}
		}
		break;
		case 4:
		{
			/*4.	Ввести массив, состоящий из 12 элементов целого типа. Получить новый массив, заменив значение пятого элемента среднеарифметическим исходного массива*/
			int a[12];
			int summ = 0;
			for (int i = 0;i < 12;i++)
			{
				a[i] = 0 + rand() % 25;
				cout << i << " - " << a[i] << endl;
				summ += a[i];
			}
			cout << "-------------------------------------\n";
			a[4] = summ / 12;
			for (int i = 0;i < 12;i++)
				cout << i << " - " << a[i] << endl;
		}
		break;
		case 5:
		{
			/*5.	Задан массив, состоящий из 15 элементов вещественного типа. Определить количество элементов, значения которых больше первого элемента*/
			double a[15];
			double b, c;
			int schet = 0;
			for (int i = 0;i < 15;i++)
			{
				b = 0 + rand() % 30;
				c = 0 + rand() % 30;
				a[i] = b / c;
				cout << i << " - " << a[i] << endl;
			}
			cout << "--------------------------------------\n";
			for (int i = 1;i < 15;i++)
			{
				if (a[i] > a[0])
					schet++;
			}
			cout <<"колличество элементов больше чем первый = "<< schet << endl;
		}
		break;
		default:cout << "Нет такого задания" << endl;
			break;
		}
		cout << "Вы хотите продолжить? (1) Да (2) Нет: ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}