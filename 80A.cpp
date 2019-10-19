#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include<string>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
	if (nums.size() <= 1)
		return nums.size();
	int current = 1;
	for (int i = 2; i < nums.size(); ++i)
	{
		if (nums[i] != nums[current - 1])
		{
			current += 1;
			nums[current] = nums[i];
		}
		
		
		return current + 1;
	}
}

int main80A() {

	
	system("pause");
	return EXIT_SUCCESS;
}