// CLRS2.1.2.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*���ǽ�������ֻ�轫whileѭ���ĳɣ�
while(key<a[i])
*/
#include "stdafx.h"
#include<iostream>
using namespace std;
void insertSort(int a[], int length)
{
	int i = 0;
	int j, key;
	for (j = 1; j < length; j++)
	{
		key = a[j];
		i = j - 1;
		while (key > a[i])
		{
			int tmp;
			tmp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = tmp;
			i = i - 1;
			if (i < 0){ break; }
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int a[7] = { 1, 4, 5, 22, 33, 44, 55 };
	insertSort(a, 7);
	int i;
	for (i = 0; i < 7; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}


