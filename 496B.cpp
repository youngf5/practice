#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<int> nextGreatElement(vector<int> &nums1, vector<int> &nums2)
{
	vector<int> ans;
	for (int i = 0; i < nums2.size(); ++i)             //nums1  1,3,2,4      nums2 4,1,2
	{
		for (int j = 0; j < nums1.size(); ++j)
		{
			if (nums2[i] == nums1[j])
			{
				++j;
				while (j<nums1.size())
				{
					if (nums2[i] < nums1[j])
					{
						ans.push_back(nums1[j]);
						j = nums1.size();
					}
					++j;
				}
				if(j==nums1.size())
					ans.push_back(-1);
			}
		}
	}
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << endl;
	return ans;
}

int main496B() {
	vector<int>nums1 = { 1,2,3,4 };
	vector<int>nums2 = { 2,4 };
	nextGreatElement(nums1, nums2);


	system("pause");
	return EXIT_SUCCESS;
}