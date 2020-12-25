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
		cout << "1.Заполнить список" << endl;
		cout << "2.FuncSort" << endl;
		cout << "3.Выход" << endl;
		cin >> enter;
		switch (enter)
		{
		case 1:
			cout << "Введите количество элементов списка:";
			cin >> col;
			for (int i = 0; i < col; i++)
			{
				cout << "Введите" << i << "элемент списка:";
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