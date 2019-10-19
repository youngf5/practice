#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//超出时间限制
int tribonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	int ans = tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
	return ans;
}

int main1137B1() {

	int n = 34;
	int res = tribonacci(n);
	cout << res << endl;
	system("pause");
	return EXIT_SUCCESS;
}