#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int majorityElement(vector<int> &nums)
{
	map<int, int>mp;
	for (int i = 0; i < nums.size(); ++i)
		mp[nums[i]] = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		mp[nums[i]]++;
		if (mp[nums[i]]>nums.size() / 2)
		{
			cout << nums[i] << endl;
			return nums[i];
		}
	}
	return -1;
}

int main169B() {

	vector<int>nums = { 2,2,1,1,1,2,2 };
	majorityElement(nums);

	system("pause");
	return EXIT_SUCCESS;
}