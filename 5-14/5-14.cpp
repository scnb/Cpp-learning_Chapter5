// 5-14.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��clock()��ͷ�ļ�ctime�������ӳ�ѭ��

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cout << "Enter the delay times, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs*CLOCKS_PER_SEC;//��ϵͳʱ��Ϊ��λ��ʱ��
	cout << "starting\a\n";
	clock_t start = clock();//��¼���ڿ�ʼ��ʱʱ��ϵͳʱ��
	while (clock() - start < delay)//��ÿһ��ʵʱ��ϵͳʱ���ȥ��ʼ��ʱʱ��ϵͳʱ�䣬������ʱʱ��Ƚ�
	{
	};
	cout << "Done \a\n";
	getchar();
	getchar();
    return 0;
}

