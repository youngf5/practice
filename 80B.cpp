#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include<string>
using namespace std;
// ************************´íÎó´ð°¸****************
class Solution
{
public:
	int testVector(vector<int> &num)
	{
		if (num.size() == 0)
			return 0;
		int count = 1;
		for (int i = 0; i < num.size() - 1; ++i)
		{
			if (num[i] == num[i + 1])
				count++;
			else
			{
				if (count > 2)
					return -1;
				else
					count = 0;
			}
		}
		return 0;
	}

	int removeDuplicates(vector<int> &nums)
	{
		int j = 0;
		int size = nums.size();
		int ret = testVector(nums);
		if (ret == 0)
			return size;
		int count1 = 0;	
		if (size == 1 || size == 2)
			return size;
		for (int i = 0; i < size; i = count1)          // 0 0 1 1 1 1 2 2 2 4
		{                                             // 0 0 1 1 2 2 2 4 4
			int count = 1;                            // 0 0 1 1 2 2 4
			count1 = 0;
			j = 1;
			while (i + j < size && nums[i] == nums[i + j] )            
			{                                       
				count++;
				j++;
				if (count == 3)
				{
					count1 = i + j - 1;
				}
			}
			if (count <= 2 )
			{
				if (j == 1)
					count1 = 1;
				else
					count1 = 2;
				continue;
			}
			for (int k = count1, m = i + j; m < size; ++m, ++k)
			{
				nums[k] = nums[m];

			}
			count -= 2;
			size = size - count;
			vector<int>::iterator it = nums.begin();
			for (int n = 0; n < count; ++n)
			{
				int temp = size - 1;
				//cout << *(it + temp) << endl;
				nums.erase(it + temp);
			}

			int ret = testVector(nums);
			if (ret == 0)
				break;

		}
		for (int i = 0; i < nums.size(); ++i)
		{
			cout << nums[i] << endl;
		}
		return size;
	}
};

int main80B() {

	vector<int> num = { 1,1,1,2,2,3 };
	Solution s;
	s.removeDuplicates(num);

	system("pause");
	return EXIT_SUCCESS;
}