// CLRS2.1.2.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*���ǽ�������ֻ�轫whileѭ���ĳɣ�
while(key<a[i])
*/
#include "stdafx.h"
#include<iostream>
using namespace std;
//��������
//����Ϊͨ������ѡ���Ƿ����ǰ��/����
void INSERT_SORT(int a[],int length){
	int i=0, j, key;
	for (j = 1; j < length; j++){
		key = a[j];
		i = j - 1;
		while (key>a[i]){
			int tmp;
			tmp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = tmp;
			i--;
			if (i < 0){
				break;
			}
		}
	}
}

int main()
{
	int a[7] = { 11, 42, 58, 22, 33, 44, 55 };
	INSERT_SORT(a, 7);
	int i;
	for (i = 0; i < 7; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

