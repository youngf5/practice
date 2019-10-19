#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

char findTheDifferenceI(string s, string t)
{
	int sum = 0;
	for (int i = 0; i < t.length(); ++i)
	{
		sum += t[i];
		if (i < s.length())
			sum -= s[i];
	}
	cout << (char)sum << endl;
	return (char)sum;
}

int mainA1() {

	string s = "abcd";
	string t = "abcde";
	findTheDifferenceI(s, t);

	system("pause");
	return EXIT_SUCCESS;
}