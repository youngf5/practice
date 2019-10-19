#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

bool detectCapitalUseA(string word)
{
	int uc = 0;
	for (int i = 0; i < word.size(); ++i)
	{
		if (isupper(word[i]) && uc++ < i)
		{
			return false;
		}
	}
	return uc == word.size() || uc <= 1;
}

int main520A() {

	string word = "FLG";
	detectCapitalUseA(word);

	system("pause");
	return EXIT_SUCCESS;
}