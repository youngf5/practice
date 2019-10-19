#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<bitset>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std;

int distributeCandiesi(vector<int> &candies)
{
	bitset<200001>pool;
	for (int i = 0; i < candies.size(); ++i)
	{
		pool.set(candies[i] + 100000);
	}
	return min(candies.size() / 2, pool.count());
}

int main575A2() {



	system("pause");
	return EXIT_SUCCESS;
}