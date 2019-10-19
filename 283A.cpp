#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void moveZeroesA(vector<int> &nums)
{
	for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++)
		if (nums[cur] != 0)
			swap(nums[lastNonZeroFoundAt++], nums[cur]);
}

int main283A() {

	vector<int>nums = { 0,1,0,3,12 };   
	moveZeroesA(nums);

	system("pause");
	return EXIT_SUCCESS;
}