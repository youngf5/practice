#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> distributeCanadiesIII(int candies, int num_people)
{
	vector<int> ans(num_people, 0);
	int count = 0;
	while (candies)
	{
			for (int i = 0; i < num_people; ++i)
			{
				if (candies > count*num_people + (i + 1))
				{
					ans[i]+=(count*num_people + (i + 1));
					candies -= (count*num_people + (i + 1));
				}
				else
				{
					ans[i]+=(candies);
					candies = 0;
					break;
				}
				if (i == num_people)
				{
					break;
				}
			}
			count++;
	}
	for (int i = 0; i < num_people; ++i)
		cout << ans[i] << endl;
	return ans;
}

int main1103B() {

	int candies = 10;
	int num_peopel = 3;
	distributeCanadiesIII(candies, num_peopel);


	system("pause");
	return EXIT_SUCCESS;
}