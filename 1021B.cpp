#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<stack>
using namespace std;

string RemoveBracket(string str)
{
	string str1 = "";
	string str2 = "";
	int n = str.length();
	stack<char>tem;
	for (int i = 0, j = 0; i < n; i++)
	{
		if ('(' == str[i])
			tem.push(str[i]);
		else tem.pop();
		if (tem.empty())
		{
			str1 = str.substr(j + 1, i - j - 1);
			j = i + 1;
			str2 = str2 + str1;
		}
	}
	cout << str2 << endl;
	return str2;
}
int main1021B() {
	string str = "(((())))(()())";
	RemoveBracket(str);


	system("pause");
	return EXIT_SUCCESS;
}