// 5-18.cpp : 定义控制台应用程序的入口点。
//通过重定向，使用ctrl+z和enter来模拟文件尾

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int count = 0;
	int x = (1, 023);//逗号运算符使该式子的值为后一个，后一个是8进制形式的，即2*8+3 = 19；
	cin.get(ch);
	while (cin.fail() == false)//当该成员函数为false时，说明输入还没有到结尾
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

