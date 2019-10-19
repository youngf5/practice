#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int removeElementA(vector<int> &nums,int val)
{
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] == val)
		{
			nums.erase(nums.begin() + i);
			--i;
		}
	}
	for (int i = 0; i < nums.size(); ++i)
		cout << nums[i] << endl;
	cout << nums.size() << endl;
	return nums.size();
}

int main27A() {

	vector<int> nums = { 0,1,2,2,3,0,4,2 };
	int val = 2;
	removeElementA(nums, val);

	system("pause");
	return EXIT_SUCCESS;
}