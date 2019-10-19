#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
string toLowerCase(string str)
{
	
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') 
			str[i] = str[i] + 'a' - 'A';
	}
	cout << str << endl;
	return str;
}
int main709() {
	string str = "Hello world";
	cout << str << endl;
	cout << sizeof(str) << endl;      //string类型变量占内存大小是28个字节   28byte
	cout << sizeof(string) << endl;
	cout << str.length() << endl;
	toLowerCase(str);


	system("pause");
	return EXIT_SUCCESS;
}