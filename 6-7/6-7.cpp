// 6-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <climits>
bool is_init(double);
using namespace std;

int main()
{
	double num;
	cin >> num;
	while (!(is_init(num)))
	{
		cout << "不是整数，重新输入。";
		cin >> num;
	}
	int val = int(num);
	cout << "输入的整数为：" << val << endl;
	getchar();
	getchar();
    return 0;
}

bool is_init(double x)
{
	if (x >= INT_MIN && x <= INT_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}