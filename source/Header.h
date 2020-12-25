#pragma once
#pragma once
#include <iostream>
#include<stdio.h>

using namespace std;
class List
{
public:
	List();
	void InsElemOne(int pow);
	void InsElemTwo(int pow);
	void PrintList();
	void DelElem(int pos, int list);
	void FuncSort();
private:
	class Node {
	public:
		int pow;
		Node* pNext;
	public:
		Node(int pow, Node* pNext)
		{
			this->pow = pow;
			this->pNext = pNext;
		}
	};
	int size;
	int size2;
	Node* pHead;
	Node* pCurr;
	Node* pHead2;
	Node* pCurr2;
	Node* pNew;
	Node* pPrev;
	Node* pPrev2;
	Node* pDel;
	Node* pCurr3;
	Node* pCurr4;

};
List::List()
{
	pHead = new Node(0, NULL);
	pHead->pNext = pHead;
	size = 1;
	pHead2 = new Node(0, NULL);
	pHead2->pNext = pHead2;
	size2 = 1;
}
void List::PrintList()
{
	pCurr = pHead->pNext;
	pCurr2 = pHead2->pNext;
	if (size != 1)
	{
		while (pCurr != NULL)
		{
			cout << pCurr->pow << "->";
			pCurr = pCurr->pNext;
		}
		cout << "NULL" << endl;
	}
	else
		cout << "Список пуст" << endl;
	if (size2 != 1)
	{
		while (pCurr2 != NULL)
		{
			cout << pCurr2->pow << "->";
			pCurr2 = pCurr2->pNext;
		}
		cout << "NULL" << endl;
	}
	else
		cout << "Список пуст" << endl;
}
void List::InsElemOne(int pow)
{
	pCurr = this->pHead;
	if (size == 1)
	{
		pNew = new Node(pow, NULL);
		pHead->pNext = pNew;
		size++;
	}
	else
	{
		pCurr = pHead->pNext;
		while (pCurr->pNext != NULL)
		{
			pCurr = pCurr->pNext;
		}
		pNew = new Node(pow, NULL);
		pCurr->pNext = pNew;
		size++;
	}
}
void List::InsElemTwo(int pow)
{
	pCurr2 = this->pHead2;
	if (size2 == 1)
	{
		pNew = new Node(pow, NULL);
		pHead2->pNext = pNew;
		size2++;
	}
	else
	{
		pCurr2 = pHead2->pNext;
		while (pCurr2->pNext != NULL)
		{
			pCurr2 = pCurr2->pNext;
		}
		pNew = new Node(pow, NULL);
		pCurr2->pNext = pNew;
		size2++;
	}
}
void List::DelElem(int pos, int list)
{
	pos--;
	if (list == 1)
	{
		if (pos <= size)
		{
			if (size > 1)
			{
				pPrev = this->pHead;
				pCurr = pHead->pNext;
				for (int i = 0; i < pos; i++)
				{
					pCurr = pCurr->pNext;
					pPrev = pPrev->pNext;
				}
				pPrev->pNext = pCurr->pNext;
				pDel = pCurr;
				delete pDel;
				size--;
			}
		}
	}
	if (list == 2)
	{
		if (pos <= size2)
		{
			if (size2 > 1)
			{
				pPrev2 = this->pHead2;
				pCurr2 = pHead2->pNext;
				for (int i = 0; i < pos; i++)
				{
					pCurr2 = pCurr2->pNext;
					pPrev2 = pPrev2->pNext;
				}
				pPrev2->pNext = pCurr2->pNext;
				pDel = pCurr2;
				delete pDel;
				size2--;
			}
		}
	}
}
void List::FuncSort()
{
	int col = 1;
	pCurr3 = pHead->pNext;
	while (pCurr3 != NULL)
	{
		if ((pCurr3->pow) % 2 == 0)
		{
			InsElemTwo(pCurr3->pow);
			pCurr3 = pCurr3->pNext;
			DelElem(col, 1);
		}
		else
		{
			pCurr3 = pCurr3->pNext;
			col++;
		}
	}
}