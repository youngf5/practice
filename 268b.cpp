#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int missingNumber(vector<int> &nums)
{
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != i)
		{
			cout << i << endl;
			return i;
		}
	}
	return nums.size();
}

int main268B() {

	vector<int> nums = { 0 };
	missingNumber(nums);

	system("pause");
	return EXIT_SUCCESS;
}