#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;


int singleNumber(vector<int> &nums)            //***********һ������ͬһ�������������ֻ��������ý����������**********
{
	int result = 0;                          
	for (auto e : nums)
	{
		result ^= result;
	}
	cout << result << endl;
	return result;
}
int main136B() {
	vector<int>nums = { 4,1,2,1,2 };
	singleNumber(nums);


	system("pause");
	return EXIT_SUCCESS;
}