#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

bool isPrime(int num)
{
	if (num < 2)
		return false;
	for (int i = 2; i*i <= num; ++i)
	{
		if (num%i == 0)
			return false;
	}
}

int countPrimeSetBitsI(int L, int R)
{
	int ans = 0;
	for (int i = L; i <= R; ++i)
	{
		int tmpNum = i, tmpCnt = 0;
		while (tmpNum != 0)                                     //while(tmpNum!=0)
		{                                                      //{
			tmpNum &= tmpNum - 1;                              //     if(tmpNum&1!=0)
			tmpCnt++;                                          //           tmpCnt++;
		}                                                      //     tmpNum>>1;
		if (isPrime(tmpCnt))                                   //}
			ans++;
	}
	cout << ans << endl;
	return ans;
}
int main762A() {
	int l = 10;
	int r = 15;
	countPrimeSetBitsI(l, r);


	system("pause");
	return EXIT_SUCCESS;
}