// 6-13.cpp : 定义控制台应用程序的入口点。
//使用非数字的输入来结束cin读取数字的循环

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
	for (int j = 0;j < i;j++)//必须用j和i判断，不能用MAX，因为可能数组没有填满
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

