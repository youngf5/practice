#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int missingNumberA(vector<int> &nums)
{
	int sum = nums.size();
	for (int i = 0; i < nums.size(); ++i)
	{
		sum ^= i;                         //********������㣬һ������������ͬ�������������������������*******
		sum ^= nums[i];
	}
	return sum;
}

int main268A() {

	vector<int> nums = { 0 };
	missingNumberA(nums);

	system("pause");
	return EXIT_SUCCESS;
}