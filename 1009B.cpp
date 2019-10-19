#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int bitwiseComplement(int N)
{
	int count = 0;
	int ans = 0;
	if (N == 0)
		ans = 1;
	while (N>0)
	{
		int temp = N % 2;      //5
		if (temp == 0)
		{
			temp = 1;
			ans += temp*(int)pow(2, count);
		}
		if (temp == 1)
		{
			temp = 0;
		}
		N = N / 2;
		count++;
	}
	cout << ans << endl;
	return ans;
}

int main1009B() {

	int N = 10;
	bitwiseComplement(N);

	system("pause");
	return EXIT_SUCCESS;
}