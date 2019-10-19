#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;

int titleToNumber(string s)
{
	int m =s.length();
	int n=0;
	for (int i = 0; i < m; i++)
	{
		n = (s[i] - 'A' + 1)*pow(26,m-i-1) + n;
	}
	cout << n << endl;
	return n;
}
int main171b() {
	string s = "A";
	titleToNumber(s);


	system("pause");
	return EXIT_SUCCESS;
}