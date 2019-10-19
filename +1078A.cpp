#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
#include<sstream>
using namespace std;

vector<string>findOcurrencesI(string text, string first, string second)
{
	if (text.empty() || first.empty() || second.empty())
		return vector<string>();
	vector<string>res;
	string s1, s2;
	istringstream ss(text);
	ss >> s1;
	while (true)
	{
		if (!(ss >> s2))
			break;
		if (s1 == first&&s2 == second)
		{
			if (!(ss >> s1))
				break;
			res.push_back(s1);
		}
		else s1 = s2;         //把s2的值传给s1，等价于向后移动一个字符串
	}
	for (int i = 0; i < res.size(); ++i)
		cout << res[i] << endl;
	return res;
}

int main1078A() {

	string text = "we will we will rock you";
	string first = "we";
	string second = "will";
	findOcurrencesI(text, first, second);

	system("pause");
	return EXIT_SUCCESS;
}