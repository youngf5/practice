#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<string> findOcurrences(string text, string first, string second)
{
	vector<string>txt;
	vector<string>ans;
	string res;
	for (int i = 0; i < text.size(); ++i)
	{
		if (text[i] != ' ')
			res.push_back(text[i]);
		if (text[i] == ' '||text[i+1]=='\0')
		{
			txt.push_back(res);
			res = "";
		}

	}
	//for (int i = 0; i < txt.size(); ++i)
	//	cout << txt[i] << endl;
	for (int i = 0; i < txt.size(); ++i)
	{
		int temp = i;
		if (txt[temp] == first&&txt[temp+1]==second)
		{
			if (temp < txt.size() - 2)
			{
				cout << txt[temp+2] << endl;
				ans.push_back(txt[temp]);
			}
		}
	}
	return ans;
}

int main1078B() {

	string text = "we will we will rock you";
	string first = "we";
	string second = "will";
	findOcurrences(text, first, second);

	system("pause");
	return EXIT_SUCCESS;
}