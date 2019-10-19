#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<string>
using namespace std;


vector<vector<int>>allCellsDistOrderII(int R, int C, int r0, int c0)
{
	if (R <= 0 || C <= 0 || r0 < 0 || c0 < 0)
		return vector<vector<int>>();


	unordered_map<int, vector<vector<int>>>dict;          //定义一个无序的map，键值类型<int , vector<vector<int>>> 
	for (int i = 0; i != R; ++i)
	{
		for (int j = 0; j != C; ++j)
		{
			int val = abs(i - r0) + abs(j - c0);
			dict[val].push_back(vector<int>({ i,j }));     //*****dict[val].push_back(vector<int>({i,j}));******
		}
	}


	vector<int>keys;                                   //key存储的是两个点之间的距离（曼哈顿距离）
	for (auto val : dict)
	{
		keys.push_back(val.first);
	}
	sort(keys.begin(), keys.end());                   




	vector<vector<int>>res;
	for (auto val : keys)
	{
		//map的数组的数组如何读取值
		//cout<<(*((*(dict[val].begin())).begin()))<<endl;
		res.insert(res.end(), dict[val].begin(), dict[val].end());
	}


	return res;
}

int main1130A1() {
	int R = 2, C = 3, r0 = 1, c0 = 2;
	allCellsDistOrderII(R, C, r0, c0);


	system("pause");
	return EXIT_SUCCESS;
}