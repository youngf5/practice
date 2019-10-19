#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//超出时间限制****************
int minMoves(vector<int> &nums)
{
	int count = 0;
	while (true)
	{
		sort(nums.begin(), nums.end());
		if (nums.front() == nums.back())
			break;
		else
		{
			for (int i = 0; i < nums.size(); ++i)
			{
				if (i <= nums.size() - 2)
					nums[i] += 1;
			}
			//sort(nums.begin(), nums.end());
			count++;
		}
	}
	cout << count << endl;
	return count;
}

int main453B() {

	vector<int> nums = { 1,2,3 };
	minMoves(nums);

	system("pause");
	return EXIT_SUCCESS;
}