// 6-16.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;
int main()
{
	char filename[SIZE];
	ifstream inFile;//为ifstream类创建对象
	cout << "enter name of data file:";
	cin.getline(filename,50);
	inFile.open(filename);//将ifstream对象与文件关联,必须得先建立该文件
	if (!inFile.is_open())//如果与文件关联失败
	{
		cout << "coundn't open the file " << filename << endl;
		cout << "program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0;
	int count = 0;//记录读取的个数
	inFile >> value;
	while (inFile.good())//读取成功并且不是文件尾
	{
		++count;//记录值加1
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())//如果读取到文件尾
	{
		cout << "end of file reached." << endl;
	}
	else if (inFile.fail())//如果读取文件失败
	{
		cout << "input terminated by data mismatch." << endl;
	}
	else
	{
		cout << "input terminated for unknown reason." << endl;//因未知原因读取停止
	}
	if (count == 0)
	{
		cout << "no data proceed." << endl;
	}
	else
	{
		cout << "items read: " << count << endl;
		cout << "sum: " << sum << endl;
		cout << "average: " << sum / count << endl;
	}
	inFile.close();
	getchar();
    return 0;
}

