#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t)
{
	if (s.size() != t.size())
	{
		cout << "false" << endl;
		return false;
	}
	if (s==t)
	{
		cout << "true" << endl;
		return true;
	}

	string s1 = s;
	string t1 = t;
	sort(s1.begin(), s1.end());
	sort(t1.begin(), t1.end());
	if (equal(s1.begin(), s1.end(), t1.begin()))
	{
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == t[i])
				;
			else if(s[i]!=t[i])
			{
				cout << "true" << endl;
				return true;
			}
		}
	}
	cout << "false" << endl;
	return false;
}

int main242B() {

	string s = "a";
	string t = "a";
	//cout << s.size() << endl;
	isAnagram(s, t);

	system("pause");
	return EXIT_SUCCESS;
}