// Chapter5.cpp : 定义控制台应用程序的入口点。
//使用两个逗号运算符将一个string对象进行翻转

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1;j < i;--i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	getchar();
	getchar();
    return 0;
}

