#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<conio.h>
#include<string>
using namespace std;


//单调递增栈：简单说，单调递增栈就是一个保持栈内元素为单调递增的栈
/*
	for(int i=0;i<A.size();++i)
	 {
		while(! in_stk.empty()&&in_stk.top()>A[i])
		{
			in_stk.pop();
		}
		in_stk.push(A[i]);
	 }
*/

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
	map<int, int> Pmap;
	stack<int> Upstack;
	vector<int> result;
	
	for (int i = 0; i < nums2.size(); ++i)
	{
		if (Upstack.empty() || Upstack.top()>nums2[i])
			Upstack.push(nums2[i]);
		else {
			while (!Upstack.empty() && Upstack.top() < nums2[i])
			{
				Pmap.insert({ Upstack.top(),nums2[i] });
				Upstack.pop();
			}
			Upstack.push(nums2[i]);
		}
	}
	while (!Upstack.empty())
	{
		Pmap.insert({ Upstack.top(),-1 });
		Upstack.pop();
	}
	for (int i = 0; i < nums1.size(); ++i)
	{
		cout << Pmap[nums1[i]] << endl;
		result.push_back(Pmap[nums1[i]]);
	}
	return result;
}

int main496A() {
	vector<int>nums1 = { 2,4 };
	vector<int>nums2 = { 1,2,3,4 };
	nextGreaterElement(nums1, nums2);


	system("pause");
	return EXIT_SUCCESS;
}