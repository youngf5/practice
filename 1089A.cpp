#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void duplicateZeros(vector<int> &arr)
{
	int len = arr.size();
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] == 0)
		{
			arr.insert(arr.begin() + i, 0);
			arr.pop_back();
			++i;
		}
	}
}

int main1089A() {


	system("pause");
	return EXIT_SUCCESS;
}