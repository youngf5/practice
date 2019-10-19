#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int removeElementA1(vector<int> &nums, int val)
{
	int i = 0;
	for (int j = 0; j < nums.size(); ++j)
	{
		if (nums[j] != val)
		{
			nums[i] = nums[j];
			i++;
		}
	}
	for (int i = 0; i < nums.size(); ++i)
		cout << nums[i] << endl;
	cout << i << endl;
	return i;
}

int main27A1() {

	vector<int> nums = { 0,1,2,2,3,0,4,2 };
	int val = 2;
	removeElementA1(nums, val);

	system("pause");
	return EXIT_SUCCESS;
}