#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void moveZeroes(vector<int> &nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		int m = i;
		for(int j = i + 1; j < nums.size(); ++j)
		{
			int n = j;
			if (nums[m] == 0&&nums[n]!=0)
			{
				int temp = nums[m];
				nums[m] = nums[n];
				nums[n] = temp;
				int a = m;
				m = n;
				n = a;
			}
		}
	}
	for (int i = 0; i < nums.size(); ++i)
		cout << nums[i] << endl;
}

int main283B() {

	vector<int>nums = { 0,1,0,3,12 };
	moveZeroes(nums);

	system("pause");
	return EXIT_SUCCESS;
}