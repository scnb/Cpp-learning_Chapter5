// 6-15.cpp : �������̨Ӧ�ó������ڵ㡣
//�ı��ļ�IO

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	ofstream outFile;//����ofstream��Ķ���
	outFile.open("cainof.txt");//��outFile���ļ�����
	cout << "enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "enter the model year: ";
	cin >> year;
	cout << "enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913*a_price;
	//
	//cout << fixed;
	//cout.precision(2);
	//cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "was asking: " << a_price << endl;
	cout << "Now asking: " << d_price << endl;
	//
	outFile << fixed;
	//outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "was asking: " << a_price << endl;
	outFile << "Now asking: " << d_price << endl;
	getchar();
	getchar();
    return 0;
}

