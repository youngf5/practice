#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;


//ͶƱ������ͬ��������1����ͬ��������1������ʣ�µ���Ϊ������
int majorityElementI(vector<int> &nums)
{
	int count = 0;
	int n;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (count == 0)
			n = nums[i];
		count += (n == nums[i]) ? 1 : -1;
	}
	cout << n << endl;
	return n;
}

int main169A() {

	vector<int>nums = { 2,2,1,1,1,2,2 };
	majorityElementI(nums);

	system("pause");
	return EXIT_SUCCESS;
}