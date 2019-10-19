#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
	int count = 0;
	vector<int>res;
	for (int i = 0; i < nums.size(); ++i)      //1 1 0 1 1 1 
	{
		if (nums[i] == 1)
			count++;
		else
		{
			res.push_back(count);
			count = 0;
		}
	}
	res.push_back(count);
	sort(res.begin(), res.end());
	return res.back();
}

int main485B() {

	vector<int> nums = { 1,1,0,1,1,1 };
	findMaxConsecutiveOnes(nums);

	system("pause");
	return EXIT_SUCCESS;
}