// 5-18.cpp : �������̨Ӧ�ó������ڵ㡣
//ͨ���ض���ʹ��ctrl+z��enter��ģ���ļ�β

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int count = 0;
	int x = (1, 023);//���������ʹ��ʽ�ӵ�ֵΪ��һ������һ����8������ʽ�ģ���2*8+3 = 19��
	cin.get(ch);
	while (cin.fail() == false)//���ó�Ա����Ϊfalseʱ��˵�����뻹û�е���β
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
	cout << x << endl;
	cout << y << endl;
	getchar();
    return 0;
}

