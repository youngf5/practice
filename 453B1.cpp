#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//超出时间限制****************
int minMovesB1(vector<int> &nums)
{
	int count = 0;
	while (true)
	{
		sort(nums.begin(), nums.end());
		if (nums.front() == nums.back())
			break;
		else
		{
			int sub = nums.back() - nums.front();
			for (int i = 0; i < nums.size(); ++i)
			{
				if (i <= nums.size() - 2)
					nums[i] += sub;
			}
			count+=sub;
		}
	}
	cout << count << endl;
	return count;
}

int main453B1() {

	vector<int> nums = { 1,2,3 };
	minMovesB1(nums);

	system("pause");
	return EXIT_SUCCESS;
}