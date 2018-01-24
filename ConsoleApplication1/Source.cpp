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
		cout << "������� ����� �������: ";
		cin >> N;
		cout << endl;
		switch (N)
		{
		case 1:
		{
			/*1.	��� ������. ������� �� ����� ������� ��� ��������������� ��������, ����� �������������*/
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
			/*2.	� ������� �������� ���������� � ���������� �����, ���������� 20 ����������� ���������. ���������� ������ ������, ������� ������ ���� �����.*/
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
			/*3.	������ ������, ��������� �� 14 ��������� ������ ����. ����� ���������� ��������� ������ �� ��������.*/
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
			/*4.	������ ������, ��������� �� 12 ��������� ������ ����. �������� ����� ������, ������� �������� ������ �������� �������������������� ��������� �������*/
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
			/*5.	����� ������, ��������� �� 15 ��������� ������������� ����. ���������� ���������� ���������, �������� ������� ������ ������� ��������*/
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
			cout <<"����������� ��������� ������ ��� ������ = "<< schet << endl;
		}
		break;
		default:cout << "��� ������ �������" << endl;
			break;
		}
		cout << "�� ������ ����������? (1) �� (2) ���: ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}