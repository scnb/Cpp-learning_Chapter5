// 6-16.cpp : �������̨Ӧ�ó������ڵ㡣
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
	ifstream inFile;//Ϊifstream�ഴ������
	cout << "enter name of data file:";
	cin.getline(filename,50);
	inFile.open(filename);//��ifstream�������ļ�����,������Ƚ������ļ�
	if (!inFile.is_open())//������ļ�����ʧ��
	{
		cout << "coundn't open the file " << filename << endl;
		cout << "program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0;
	int count = 0;//��¼��ȡ�ĸ���
	inFile >> value;
	while (inFile.good())//��ȡ�ɹ����Ҳ����ļ�β
	{
		++count;//��¼ֵ��1
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())//�����ȡ���ļ�β
	{
		cout << "end of file reached." << endl;
	}
	else if (inFile.fail())//�����ȡ�ļ�ʧ��
	{
		cout << "input terminated by data mismatch." << endl;
	}
	else
	{
		cout << "input terminated for unknown reason." << endl;//��δ֪ԭ���ȡֹͣ
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

