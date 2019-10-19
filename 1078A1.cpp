#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<sstream>
#include<conio.h>
#include<string>
using namespace std;

vector<string> findOcurrencesII(string text, string first, string second)
{
	stringstream iss(text);        //*******istringstream  只支持>>操作符，不支持<<操作符，stringstream支持>>操作符也支持<<操作符*******
	string temp;
	int flag = 0;
	vector<string>vec;
	while (iss >> temp)
	{
		if (flag == 2)
			vec.emplace_back(temp);          //在容器尾部插入元素，这个元素原地构造，不出发拷贝构造和转移构造，直接根据参数初始化临时对象的成员
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