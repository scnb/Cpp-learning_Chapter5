// 6-13.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ�÷����ֵ�����������cin��ȡ���ֵ�ѭ��

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX = 5;

int main()
{
	double fish[MAX];
	cout << "enter numbers of fish,up to " << MAX << endl;
	int i = 0;
	cout << "fish #1:";
	while (i < MAX && cin >> fish[i])
	{
		if (++i < MAX)
		{
			cout << "fish #" << i + 1<<":";
		}
	}
	double total = 0;
	for (int j = 0;j < i;j++)//������j��i�жϣ�������MAX����Ϊ��������û������
	{
		total = total + fish[j];
	}
	if (i == 0)
	{
		cout << "no fish." << endl;
	}
	else
	{
		cout << total / i << " = average of " << i << " fish." << endl;
	}
	getchar();
	getchar();
	getchar();
    return 0;
}

