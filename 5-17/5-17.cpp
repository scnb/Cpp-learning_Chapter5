// 5-17.cpp : 定义控制台应用程序的入口点。
//使用cin.get()函数进行输入

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

