#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//û���ų�������ĸ���ַ�����������ĸ�����

char findTheDifference(string s, string t)
{
	char c=0;
	for (int i = 0; i < t.length(); ++i)
	{
		if (s.find(t[i]) >t.length())
			c = t[i];
	}
	cout << c << endl;
	return c;
}

int main389B() {

	string s = "abcd";
	string t = "abcde";
	findTheDifference(s, t);
	system("pause");
	return EXIT_SUCCESS;
}