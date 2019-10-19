#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

char findTheDifferenceII(string s, string t)    //一个数与同一个数进行两次异或运算后得到的数是它本身*******
{                                               //任何数跟0进行异或运算得到的结果都是它本身*******
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