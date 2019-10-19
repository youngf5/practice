#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;


int addprocess(int num)
{
	int m = num % 10;    //8     1
	while (num / 10)      //3     1
	{
		num = num / 10;     //3     1   
		m += (num % 10);   //11      2
	}
	return m;
}

int addDigits(int num)
{
	//int m = num % 10;
	//int n = 0;
	//int result = 0;
	//while (num / 10)
	//{
	//	num = num / 10;
	//	m += (num % 10);
	//}
	//m += num;
	while (num/10)
	{
		num=addprocess(num);
		/*num = addprocess(num / 10);*/
	}
	cout << num << endl;
	return num;
}
int main258B() {

	int num = 256;
	addDigits(num);

	system("pause");
	return EXIT_SUCCESS;
}