#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

string itos(int i)
{
	stringstream ss;
	ss << i;
	return ss.str();
}

vector<string> fizzBuzz(int n)
{
	int flag = 0;
	vector<string>ans;
	for (int i = 1; i <= n; ++i)
	{
		string s;
		s = itos(i);
		if (i % 3 == 0)
		{
			flag = 1;
			s = "Fizz";
		}
		if (i % 5 == 0)
		{
			flag = 2;
			s = "Buzz";
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			flag = 3;
			s = "Fizz Buzz";
		}
		switch (flag)
		{
		case 0:
			ans.push_back(s);
			break;
		case 1:
			ans.push_back(s);
			break;
		case 2:
			ans.push_back(s);
			break;
		case 3:
			ans.push_back(s);
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << endl;
	return ans;
}

int main412B() {

	int n = 15;
	fizzBuzz(n);

	system("pause");
	return EXIT_SUCCESS;
}