#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

char findTheDifferenceII(string s, string t)    //һ������ͬһ��������������������õ�������������*******
{                                               //�κ�����0�����������õ��Ľ������������*******
	char res = 0;
	for (int i = 0; i < s.size(); ++i)
		res ^= s[i];
	for (int i = 0; i < t.size(); ++i)
		res ^= t[i];
	cout << res << endl;
	return res;
}

int main389A2() {
	string s = "abcd";
	string t = "abcde";
	findTheDifferenceII(s, t);


	system("pause");
	return EXIT_SUCCESS;
}