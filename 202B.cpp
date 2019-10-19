#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isHappy(int n)
{
	vector<int> ans;
	int temp1 = n;
	while (temp1!=1)
	{
		int temp = temp1;
		int temp2 = 0;
		while (temp)
		{
			int num = temp % 10;
			temp = temp / 10;
			temp2 += num*num;
		}
		temp1 = temp2;
	}
	cout << "true" << endl;
	return true;
}

int main202B() {
	
	int n = 2;
	isHappy(n);

	system("pause");
	return EXIT_SUCCESS;
}