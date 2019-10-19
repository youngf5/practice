#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAlienSorted(vector<string> &words, string order)
{
	for (int i = 0; i < words.size() - 1; ++i)
	{
		int m = order.find(*(words[i].begin()));
		int n = order.find(*(words[i + 1].begin()));
		if (m >= n)
		{
			cout << "false" << endl;
			return false;
		}
	}
	cout << "true" << endl;
	return true;
}

int main953B() {

	vector<string> words{ "word","world","row" };
	string order = "worldabcefghijkmnpqstuvxyz";
	isAlienSorted(words, order);

	system("pause");
	return EXIT_SUCCESS;
}