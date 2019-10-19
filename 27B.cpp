#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
	int count = nums.size();
	for (int i = 0,cur = 0; i < nums.size(); ++i)
	{
		if (nums[i] == val)
			count--;
		while (nums[i] != val&&i!=cur)     // 0 1 2 2 3 0 4 2       2
		{
			int temp = nums[i];
			nums[i] = nums[cur];
			nums[cur] = temp;
			cur++;
		}
	}
	int num = nums.size() - count;
	for (int i = 0; i < num ; ++i)
	{
		nums.pop_back();
	}
		
	cout << count << endl;
	return count;
}

int main27B() {

	vector<int> nums = { 0,1,2,2,3,0,4,2 };
	int val = 2;
	removeElement(nums, val);

	system("pause");
	return EXIT_SUCCESS;
}