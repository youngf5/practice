#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> statistic(string word)
{
	vector<int> letters(26, 0);
	for (int i = 0; i < word.size(); ++i)
	{
		char c = word[i];
		if (!(c >= 'A'&&c <= 'Z') && !(c >= 'a'&&c <= 'z'))
			continue;
		if (c >= 'A'&&c <= 'Z')
			c += 32;
		letters[c - 'a']++;
	}
	return letters;
}

string shortestCompletingWordA(string llicensePlate, vector<string> &words)
{
	string res = "";
	vector<int>license = statistic(llicensePlate);
	for (int i = 0; i < words.size(); ++i)
	{
		vector<int>word = statistic(words[i]);
		bool flag = true;
		for (int j = 0; j < 26; ++j)
		{
			if (word[j] < license[j])
			{
				flag = false;
				break;
			}
		}
		if (flag == true && (res == "" || words[i].length() < res.length()))
			res = words[i];
	}
	return res;
}

int main748A() {



	system("pause");
	return EXIT_SUCCESS;
}