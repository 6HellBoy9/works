#include <iostream>
#include <stdio.h>
#include "Header.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int x, enter, col;

	List list;
	while (1)
	{
		system("cls");
		cout << "1.��������� ������" << endl;
		cout << "2.FuncSort" << endl;
		cout << "3.�����" << endl;
		cin >> enter;
		switch (enter)
		{
		case 1:
			cout << "������� ���������� ��������� ������:";
			cin >> col;
			for (int i = 0; i < col; i++)
			{
				cout << "�������" << i << "������� ������:";
				cin >> x;
				list.InsElemOne(x);
			}
			list.PrintList();
			system("pause");
			break;
		case 2:
			list.FuncSort();
			list.PrintList();
			system("pause");
			break;
		case 3:
			return;
		}
	}
}