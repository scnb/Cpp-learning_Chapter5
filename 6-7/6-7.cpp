// 6-7.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "�����������������롣";
		cin >> num;
	}
	int val = int(num);
	cout << "���������Ϊ��" << val << endl;
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