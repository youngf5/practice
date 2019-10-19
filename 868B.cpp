#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;


int binaryGap(int n)
{
	vector<int>res;
	int trans;
	int max=0;
	while (n)
	{
		trans = n % 2;
		n = n / 2;
		res.push_back(trans);
	}
	for (int i = 0; i < res.size();++i)                              //10110
	{
		int count = 0;
		if (res[i] == 1)
		{
			for (int j = i+1; j < res.size(); ++j)
			{
				if (res[j] == 0)
				{
					count++;
				}
				else
				{
					count++;
					i = j-1;
					break;
				}
			}
		}
		max = max < count ? count : max;
	}
	cout << max << endl;
	return max;
}

int main868B() {
	int n = 46;
	binaryGap(n);


	system("pause");
	return EXIT_SUCCESS;
}