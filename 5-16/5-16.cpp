// 5-16.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��cin��������

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int count = 0;
	cout << "Enter characters;Enter # to quit " << endl;
	cin >> ch;
	while (ch != '#')
	{
		cout<<ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
	getchar();
	getchar();
    return 0;
}

