#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
#include<set>
#include<iterator>
using namespace std;


vector<int>intersection(vector<int> &nums1, vector<int> &nums2)
{
	vector<int>nums3;
	set<int>nums4;
	for (int i = 0; i < nums1.size(); i++)
	{
		for (int j = 0; j < nums2.size(); j++)
		{
			if (nums1[i] == nums2[j])
			{
				nums3.push_back(nums1[i]);
				/*nums4.insert(nums1[i]);*/
				break;
			}
		}
	}
	/*iterator iterator = nums4.iterator();
	while (iterator.hasNext())
		cout << iterator.next() << endl;*/
	return nums3;
}
int main349B() {
	vector<int>nums1 = { 4,9,5 };
	vector<int>nums2 = { 9,4,9,8,4 };
	intersection(nums1, nums2);


	system("pause");
	return EXIT_SUCCESS;
}