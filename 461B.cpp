#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<stack>
using namespace std;

int HammingDistance(int x, int y)
{
	int a = x^y;       //对两个数进行位运算
	int num = 0;
	while (a != 0)
	{
		if (a & 1 != 0)     // ***************
			num++;
		a >>= 1;
	}
	cout << num << endl;
	return num;
}
int main461B() {
	int x = 1, y = 4;
	HammingDistance(x, y);


	system("pause");
	return EXIT_SUCCESS;
}