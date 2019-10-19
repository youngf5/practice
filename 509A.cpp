#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;


int fibA(int N)
{
	vector<int>dp(N + 1, 0);
	dp[1] = dp[2] = 1;
	for (int i = 3; i <= N; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[N];
}
int main509A() {
	int f0 = 0;
	int f1 = 1;
	unsigned int N;
	int s;
	cout << "please input a unsigned number:" << endl;
	cin >> N;
	s = fibA(N);
	cout << s << endl;

	system("pause");
	return EXIT_SUCCESS;
}
