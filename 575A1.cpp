#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
#include<set>
using namespace std;

int distributeCandiesI(vector<int> &candies)
{
	if (candies.empty())
		return 0;
	set<int>s;
	for (int i = 0; i < candies.size(); ++i)
	{
		s.insert(candies[i]);
	}
	int c = s.size();
	if (c >= candies.size() / 2)
	{
		cout << candies.size() / 2 << endl;
		return candies.size() / 2;
	}
	else
	{
		cout << c << endl;
		return c;
	}
}

int main575A1() {

	vector<int>candies = { 1,1,2,3 };
	distributeCandiesI(candies);

	system("pause");
	return EXIT_SUCCESS;
}