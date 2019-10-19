#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int f1(string s)
{
	sort(s.begin(), s.end());

	int res = count(s.begin(), s.end(), s[0]);
	return res;
}

vector<int>numSmallerByFrequencyB1(vector<string> &queries, vector<string> &words)
{
	vector<int>answer;
	vector<int>wordtemp;
	for (int i = 0; i < queries.size(); ++i)
	{
		int temp = 0;
		int count = f1(queries[i]);
		if (i ==0)
		{
			for (int j = 0; j < words.size(); ++j)
			{
				int wordcount = f1(words[j]);
				wordtemp.push_back(wordcount);
				if (count < wordcount)
				{
					temp++;
				}
			}
		}
		else
			for (int k = 0; k < wordtemp.size(); ++k)
			{
				if (count < wordtemp[k])
				{
					temp++;
				}
			}
		answer.push_back(temp);
	}
	return answer;
}


int main1170B1() {

	vector<string> queries = { "bbb","cc" };
	vector<string> words = { "a","aa","aaa","aaaa" };
	numSmallerByFrequencyB1(queries, words);

	system("pause");
	return EXIT_SUCCESS;
}