#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<sstream>
#include<conio.h>
#include<string>
using namespace std;

vector<string> findOcurrencesII(string text, string first, string second)
{
	stringstream iss(text);        //*******istringstream  ֻ֧��>>����������֧��<<��������stringstream֧��>>������Ҳ֧��<<������*******
	string temp;
	int flag = 0;
	vector<string>vec;
	while (iss >> temp)
	{
		if (flag == 2)
			vec.emplace_back(temp);          //������β������Ԫ�أ����Ԫ��ԭ�ع��죬���������������ת�ƹ��죬ֱ�Ӹ��ݲ�����ʼ����ʱ����ĳ�Ա
		if (temp == first)
			flag = 1;
		else if (flag == 1 && second == temp)
			flag = 2;
		else flag = 0;
	}
	for (int i = 0; i < vec.size(); ++i)
		cout << vec[i] << endl;
	return vec;
}

int main1078A1() {
	string text = "we will we will rock you";
	string first = "we";
	string second = "will";
	findOcurrencesII(text, first, second);


	system("pause");
	return EXIT_SUCCESS;
}