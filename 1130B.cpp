#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>                     //abs()ȡ����ֵ����
using namespace std;

vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0)
{
	vector<vector<int>> ans;
	multimap<int, vector<int>> mp;
	/*
		map,multimap�Զ����򣬻��߽��ܵ���������Ҫ�������
		���ֻ��value������Ҫѹ��vector����sort��������   ʵ�ַ���û��
	*/
	int dis;
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			vector<int> res;
			res.push_back(i);
			res.push_back(j);
			dis = abs(i - r0) + abs(j - c0);
			mp.insert({ dis ,res });
		}
	}
	multimap<int, vector<int>>::iterator iter;
	iter = mp.begin();
	for (int i = 0; i < mp.size(); ++i)
	{
		ans.push_back(iter->second);
		iter++;
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[0].size(); ++j)
			cout << ans[i][j] << ",";
		cout << endl;
	}
	return ans;
}


int main1130B() {
	int R = 2, C = 3, r0 = 1, c0 = 2;
	allCellsDistOrder(R, C, r0, c0);


	system("pause");
	return EXIT_SUCCESS;
}