#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int distributeCandies(vector<int> &candies)
{
	int count = 1;
	sort(candies.begin(), candies.end());
	for (int i = 0; i < candies.size()-1; ++i)
	{
		if (candies[i] != candies[i + 1])
		{
			count++;                               
		}
	}
	if (count < candies.size() / 2)
	{
		cout << count << endl;
		return count;
	}
	else
	{
		cout << candies.size() / 2 << endl;
		return candies.size();
	}
	
}
int main575B() {

	vector<int>candies = { 1,1,2,3 };
	distributeCandies(candies);

	system("pause");
	return EXIT_SUCCESS;
}