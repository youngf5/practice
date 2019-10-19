#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<set>
using namespace std;
//此题写的漏洞很大，处理不完备，代码量大，消耗时间多，太辣鸡********* 自己写的  -.-！
int rotatedDigits(int N)          
{
	set<int>ans;
	int count = 0;
	for (int i = 1; i <= N; ++i)
	{
		int n = i;
		while (n)
		{
			int num = n % 10;
			switch (num)
			{
			case 2:
				if (n / 10 != 0)
					n /= 10;
				else
				{
					n = 0;
					count++;
					cout << i << endl;
				}
				break;
			case 5:
				if (n / 10 != 0)
					n /= 10;
				else
				{
					n = 0;
					count++;
					cout << i << endl;
				}
				break;
			case 6:
				if (n / 10 != 0)
					n /= 10;
				else
				{
					n = 0;
					count++;
					cout << i << endl;
				}
				break;
			case 9:
				if (n / 10 != 0)
					n /= 10;
				else
				{
					n = 0;
					count++;
					cout << i << endl;
				}
				break;
			case 1:
				n = n / 10;
				if (n == 0)
					count++;

				break;
			case 0:
				n = n / 10;
				break;
			case 8:
				n = n / 10;
				if (n == 0)
					count++;
				break;
			case 3:
				n = 0;
				break;
			case 4:
				n = 0;
				break;
			case 7:
				n = 0;
				break;
			}
		}
		for (int i = 1; i <= N; ++i)
		{
			int m = i;
			while (m)
			{
				ans.insert(m % 10);
				m = m / 10;
				
			}
			if (ans.size() == 1)
				count--;
		}
	}
	cout << count << endl;
	return count;                                      //1  2  3  4  5  6  7  8  9  0
}


int main788B() {

	int N = 857;                     //179    247
	rotatedDigits(N);

	system("pause");
	return EXIT_SUCCESS;
}