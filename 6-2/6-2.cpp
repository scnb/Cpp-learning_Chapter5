// 6-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
		{
			cout << ch;//����������У����ǰ����ַ������
		}
		else
		{
			cout << ++ch;//����ĳ�ch+1�����������
		}
		cin.get(ch);
	}
	getchar();
	getchar();
    return 0;
}

