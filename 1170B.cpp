#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//***************超出时间限制，时间复杂度过高***********************
int f(string s)
{
	sort(s.begin(), s.end());
	
	int res = count(s.begin(), s.end(), s[0]);
	//for (int i = 0; i < s.size(); ++i)
	//{
	//	if (s[i] == s[0])
	//		count++;
	//}
	return res;
}

vector<int>numSmallerByFrequency(vector<string> &queries, vector<string> &words)
{
	vector<int>answer;
	for (int i = 0; i < queries.size(); ++i)
	{
		int temp = 0;
		int count = f(queries[i]);
			for (int j = 0; j < words.size(); ++j)
			{
				int wordcount = f(words[j]);
				if (count < wordcount)
				{
					temp++;
				}
			}
		
		answer.push_back(temp);
	}
	return answer;
}

int main1170B() {

	vector<string> queries = { "bbb","cc" };
	vector<string> words = { "a","aa","aaa","aaaa" };
	numSmallerByFrequency(queries, words);
	system("pause");
	return EXIT_SUCCESS;
}