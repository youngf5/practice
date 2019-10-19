#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<unordered_set>
#include<conio.h>
#include<string>
using namespace std;

vector<int>intersection1(vector<int> &nums1, vector<int> &nums2)
{
	unordered_set<int> nums3;
	vector<int>nums4;
	for (int i : nums1)   //通过undered_set去掉nums1中重复的元素
	{
		nums3.insert(i);
	}
	for (int j : nums2)   //遍历nums2找重叠部分
	{
		auto a = nums3.find(j);    //a的类型是iterator
		if (a != nums3.end())
		{
			nums4.push_back(j);
			nums3.erase(a);      //erase函数
		}
	}
	return nums4;
}
int main349A() {



	system("pause");
	return EXIT_SUCCESS;
}