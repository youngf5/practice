#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;


int singleNumber(vector<int> &nums)            //***********一个数与同一个数进行两次抑或运算所得结果是它本身**********
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