#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int findMaxConsecutiveOnesA(vector<int> &nums)
{
	int len = nums.size();
	int ans = 0;
	int temp = 0;
	for (int i = 0; i < len; ++i)
	{
		if (nums[i])
			temp++;
		else {
			ans = ans > temp ? ans : temp;
			temp = 0;
		}
	}
	cout << (ans > temp ? ans : temp )<< endl;
	return ans > temp ? ans : temp;
}

int main485A() {

	vector<int> nums = { 1,1,0,1,1,1 };
	findMaxConsecutiveOnesA(nums);

	system("pause");
	return EXIT_SUCCESS;
}