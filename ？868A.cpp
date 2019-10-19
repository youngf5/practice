#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int binaryGapI(int N)
{
	int res = 0, count = -1, ones = 0;
	while (N > 0)
	{
		count++;
		if (N % 2 == 1)                    //10110
		{
			ones++;         //  ones统计出现1的个数
			if (ones > 1 && count > res)
				res = count;
			count = 0;
		}
		N = N / 2;
	}
	cout << res << endl;
	return res;
}

int main868A() {

	int n = 22;
	binaryGapI(n);

	system("pause");
	return EXIT_SUCCESS;
}