#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
	sort(stones.begin(), stones.end());
	vector<int>::iterator iter1,iter2;
	while (stones.size() > 1 && !stones.empty())     //(stones.empty()==0||stones.size()!=1)
	{
		iter1 = stones.end() - 1;
		iter2 = stones.end() - 2;
		if ((*iter1) ==( *iter2))
		{
			stones.erase(iter1);
			stones.erase(iter2);
		}
		else
		{
			int temp = *iter1 - *iter2;
			stones.erase(iter1);
			stones.erase(iter2);
			stones.push_back(temp);
		}
		sort(stones.begin(), stones.end());
	}
	if (stones.empty())
	{
		cout << 0 << endl;
		return 0;
	}
	else if (stones.size() == 1)
	{
		cout << stones[0] << endl;
		return stones[0];
	}
	return stones[0];
}

int main1046B() {

	vector<int>stones = { 1,3 };
	lastStoneWeight(stones);

	system("pause");
	return EXIT_SUCCESS;
}