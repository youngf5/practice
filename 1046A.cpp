#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int lastStoneWeightI(vector<int> &stones)
{
	int zeros = (int)stones.size();
	while (zeros > 1)
	{
		sort(stones.rbegin(), stones.rend());
		if (stones[1] == 0)
			break;
		stones[0] -= stones[1];
		stones[1] -= stones[1];
	}
	cout << stones[0] << endl;
	return stones[0];
}

int main1046A() {
	vector<int> stones = { 1,2,5,3,7,4,8,10,9 };
	lastStoneWeightI(stones);


	system("pause");
	return EXIT_SUCCESS;
}