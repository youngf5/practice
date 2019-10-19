#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int rotatedDigitsA1(int N)
{
	int count = 0;
	vector<int> dp(N + 1, 0);
	for (int i = 0; i <= N; ++i)
	{ 
		if (i == 3 || i == 4 || i == 7 || dp[i % 10] == 1 || dp[i / 10] == 1)                             //dp[i%10]=1,dp[i/10]=1;*******
			dp[i] = 1;
		else if (i == 2 || i == 5 || i == 6 || i == 9 || dp[i % 10] == 2 || dp[i / 10] == 2)              //dp[i%10]=2,dp[i/10]=2;    ******
		{
			dp[i] = 2;
			count++;
		}
	}
	cout << count << endl;
	return count;
}

int main788A1() {

	int N = 857;
	rotatedDigitsA1(N);

	system("pause");
	return EXIT_SUCCESS;
}