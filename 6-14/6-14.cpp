// 6-14.cpp : �������̨Ӧ�ó������ڵ㡣
//һ���ǳ�����ļ�������Ƿ���ȷ�������ĳ���

#include "stdafx.h"
#include <iostream>
using namespace std;
const int Max = 5;
int main()
{
	int golf[Max];
	cout << "enter you scores of golf:" << endl;
	int i;
	for (i = 0;i < Max;i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))//һ�߽�����浽�����У�һ�߼�������Ƿ�����������������Ļ������ʽ��ֵΪtrue������whileѭ��
		{
			cin.clear();//����cin���ܹ�������������
			while (cin.get() != '\n')//ʹ��cin.get()��������ȡǰ�ߴ�������룬һֱ��ȡ���л��з�Ϊֹ
			{
				continue;
			}
			cout << "enter an integer number: ";
		}
	}
	double total = 0;
	for (i = 0;i < Max;i++)
	{
		total += golf[i];
	}
	cout << total / Max << " is the average scores." << endl;
	getchar();
	getchar();
    return 0;
}

