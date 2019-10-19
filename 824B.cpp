#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<sstream>
#include<unordered_set>
using namespace std;

string toGoatLatin(string s)
{
	istringstream ss(s);
	string temp, ans;
	int count = 0;
	unordered_set<char> vowles = { 'a','A','e','E','i','I','o','O','u','U' };
	while (ss>>temp)
	{
		count++;

		if (vowles.find(temp[0]) != vowles.end())
		{
			temp=temp + "ma";
		}
		else
		{
			temp=temp + temp[0] + "ma";
			temp.erase(temp.begin());
		}
		for (int i = 0; i < count;++i)
			temp=temp + "a";
		if (count == 1)
			ans = ans + temp;
		else
			ans = ans + " " + temp;

	}
	cout << ans;
	return ans;
}

int main824B() {
	string s = "The quick brown fox jumped over the lazy dog";
	toGoatLatin(s);


	system("pause");
	return EXIT_SUCCESS;
}