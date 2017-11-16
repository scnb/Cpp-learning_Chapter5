// 6-2.cpp : 定义控制台应用程序的入口点。
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
			cout << ch;//如果遇到换行，则把前面的字符都输出
		}
		else
		{
			cout << ++ch;//如果改成ch+1则以整型输出
		}
		cin.get(ch);
	}
	getchar();
	getchar();
    return 0;
}

