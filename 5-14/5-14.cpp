// 5-14.cpp : 定义控制台应用程序的入口点。
//使用clock()和头文件ctime来创建延迟循环

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cout << "Enter the delay times, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs*CLOCKS_PER_SEC;//以系统时间为单位的时间
	cout << "starting\a\n";
	clock_t start = clock();//记录下在开始计时时的系统时间
	while (clock() - start < delay)//用每一刻实时的系统时间减去开始计时时的系统时间，再与延时时间比较
	{
	};
	cout << "Done \a\n";
	getchar();
	getchar();
    return 0;
}

