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
		sum ^= i;                         //********异或运算，一个数与两个相同的数进行异或运算结果是它本身*******
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