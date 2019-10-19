#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>	
#include<string>
#include<algorithm>
using namespace std;

static bool ismax(vector<int> &a, vector<int> &b);

vector<vector<int>> allCellsDistOrderI(int R, int C, int r0, int c0)
{
	vector<vector<int>>res(R*C, vector<int>(3));         //vector<vector<int>> 类型，已知大小的情况下初始化；*******
	int num = 0;
	for (int i = 0; i < C; ++i)
	{
		for (int j = 0; j < R; ++j)
		{
			res[num][0] = j;
			res[num][1] = i;
			res[num][2] = abs(r0 - j) + abs(c0 - i);
			num++;
		}
	}
	sort(res.begin(), res.end(), ismax);                 //sort()函数，ismax为自定义的排序******
	for (int i = 0; i < num; i++)
	{
		res[i].pop_back();                                //vector的pop_back()函数，弹处最后一个元素********
	}
	for (int i = 0; i < res.size(); ++i)
	{
		for (int j = 0; j < 2; ++j)
			cout << res[i][j] << " ";
		cout << endl;
	}
	return res;
}

static bool ismax(vector<int> &a, vector<int> &b)
{
	return a[2] < b[2];
}

int main1130A() {

	int R = 2, C = 3, r0 = 1, c0 = 2;
	allCellsDistOrderI(R, C, r0, c0);

	system("pause");
	return EXIT_SUCCESS;
}