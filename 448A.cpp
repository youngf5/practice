#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> findDisappearedNumbersB(vector<int> &nums)
{
	vector<int> res;
	if (nums.empty())
		return nums;
	for (int i = 0; i < nums.size(); ++i)
	{
		int index = (nums[i] - 1) % nums.size();
		nums[index] += nums.size();
	}
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] <= nums.size())
			res.push_back(i + 1);
	}
	for (int i = 0; i < res.size(); ++i)
		cout << res[i] << endl;
	return res;
}

int main448A() {

	vector<int> nums = { 4,3,2,7,8,2,3,1 };
	findDisappearedNumbersB(nums);

	system("pause");
	return EXIT_SUCCESS;
}