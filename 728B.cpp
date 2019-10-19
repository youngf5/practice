#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

vector<int>selfDividingNumbers(int left, int right)
{
	vector<int>A;
	for (int i = left; i < right + 1; i++) {
		bool flag=0;
		int num = i;
		while (num)
		{
			int digit = num % 10;                   //**********取一个整数的个，十，百，千等位的数字*************
			if (digit != 0 && num%digit == 0)
			{
				flag = 1;
				num /= 10;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			A.push_back(i);
		}

	}
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;
	return A;
}
int main728A() {
	int left = 1;
	int right = 22;
	selfDividingNumbers(left, right);



	system("pause");
	return EXIT_SUCCESS;
}