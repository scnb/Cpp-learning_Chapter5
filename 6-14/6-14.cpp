// 6-14.cpp : 定义控制台应用程序的入口点。
//一个非常巧妙的检测输入是否正确并修正的程序

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
		while (!(cin >> golf[i]))//一边将输入存到数组中，一边检测输入是否满足条件，不满足的话，表达式的值为true，进入while循环
		{
			cin.clear();//重置cin才能够继续接收输入
			while (cin.get() != '\n')//使用cin.get()函数来读取前边错误的输入，一直读取到有换行符为止
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

