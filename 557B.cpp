#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

string reverseWords(string s)
{
	int m = 0;
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == ' '||s[i]=='\0')
		{
			int n = i - 1;
			while (m < n)
			{
			 //Let's take LeedCode contest
				char temp = s[m];
				s[m] = s[n];
				s[n] = temp;
				++m;
				--n;
			}
			m = i + 1;
		}
	}
	cout << s << endl;
	return s;
}
int main557B() {
	string  s = "Let's take LeedCode contest";
	reverseWords(s);

	system("pause");
	return EXIT_SUCCESS;
}