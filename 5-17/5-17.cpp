// 5-17.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��cin.get()������������

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	char ch;
	int count = 0;
	cout << "Enter characters;Enter # to quit\n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
	getchar();
	getchar();
    return 0;
}

