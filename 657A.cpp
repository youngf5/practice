#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;

bool JudgeCircle1(string moves)
{
	int i = 0, j = 0;
	for (auto c : moves)     //for的范围遍历
	{
		switch (c)
		{
		case 'L':
			i++;
			break;
		case 'R':
			i--;
			break;
		case 'U':
			j++;
			break;
		case 'D':
			j--;
			break;
		}
	}
	return !i&&!j ? true : false;   //********三目运算符，判断返回值*******
}
