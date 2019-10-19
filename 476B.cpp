#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;

int findComplement(int num)
{
	int temp = 1;
	while (temp < num)
	{
		temp <<= 1;             //*********ÒÖ»òÔËËã*********
		temp += 1;
	}
	return (temp^num);
}
int main476A() {
	int a = 5;
	int b=findComplement(a);
	cout << b << endl;

	system("pause");
	return EXIT_SUCCESS;
}