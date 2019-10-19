#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int rotatedDigitsA(int N)
{
	int count = 0;
	for (int i = 1; i <= N; ++i)
	{
		int n = i, flag = 0;
		while (n)
		{
			int x = n % 10;
			if (x == 3 || x == 4 || x == 7)  break;
			if (flag || x == 2 || x == 5 || x == 6 || x == 9) flag = 1;
			n /= 10;
		}
		if (n == 0 && flag)
			count++;
	}
	cout << count << endl;
	return count;
}

int main788A() {

	int N = 100;
	rotatedDigitsA(N);

	system("pause");
	return EXIT_SUCCESS;
}