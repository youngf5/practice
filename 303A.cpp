#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class NumArray
{
	vector<int>num;
public:
	NumArray(vector<int> &nums)
	{
		int sum = 0;
		num.push_back(0);
		for (int i = 0; i < nums.size(); ++i)
		{
			sum += nums[i];
			num.push_back(sum);
		}
	}

	int sumRange(int i, int j)
	{
		return num[j + 1] - num[i];
		 
	}
};

int main303A() {



	system("pause");
	return EXIT_SUCCESS;
}