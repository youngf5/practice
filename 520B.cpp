#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

bool detectCapitalUse(string word)
{
	if (word[0]<'Z'&&word[0]>'A')
	{   //FLaG
		for (int i = 1; i < word.length()-1; ++i)
		{
			if ((word[i]<='z'&&word[i]>='a')&&(word[i+1]<='Z'&&word[i+1]>='A'))
			{
				cout << "false" << endl;
				return false;
			}
			if ((word[i]<='Z'&&word[i]>='A') && (word[i + 1]<='z'&&word[i + 1]>='a'))
			{
				cout << "false" << endl;
				return false;
			}
		}
		cout << "true" << endl;
		return true;
	}
	for (int i = 0; i < word.length(); ++i)
	{
		if (word[i]<='Z'&&word[i]>='A')
		{
			cout << "false" << endl;
			return false;
		}
	}
	cout << "true" << endl;
	return true;
}

int main520B() {

	string word = "FLG";
	detectCapitalUse(word);

	system("pause");
	return EXIT_SUCCESS;
}