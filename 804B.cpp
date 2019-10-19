#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
#include<set>
using namespace std;

int uniqueMorsePresentations(vector<string> &words)
{
	vector<string>cipher = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-        ","..-","...-",".--","-..-","-.--","--.." };
	set<string>result;
	for (int i = 0; i < words.size(); i++)
	{
		string s = "";
		for (int j = 0; j < words[i].size(); j++)
		{
			s += cipher[words[i][j] - 'a'];
		}
		result.insert(s);
	}
	cout << result.size() << endl;
	return result.size();
}
int main804B() {
	vector<string>words = { "gin","zen","gig","msg" };
	uniqueMorsePresentations(words);
	

	system("pause");
	return EXIT_SUCCESS;
}