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
	for (int i : nums1)   //ͨ��undered_setȥ��nums1���ظ���Ԫ��
	{
		nums3.insert(i);
	}
	for (int j : nums2)   //����nums2���ص�����
	{
		auto a = nums3.find(j);    //a��������iterator
		if (a != nums3.end())
		{
			nums4.push_back(j);
			nums3.erase(a);      //erase����
		}
	}
	return nums4;
}
int main349A() {



	system("pause");
	return EXIT_SUCCESS;
}