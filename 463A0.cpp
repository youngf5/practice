#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;


int islandPerimeterII(vector<vector<int>> &grid)
{
	int res = 0;
	int h = grid.size(), w = grid[0].size();
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if (i + 1 < h&&grid[i][j] ^ grid[i + 1][j]) res++;    //*********通过位抑或运算判断相邻的元素是否相等**********
			if (j + 1<w && grid[i][j] ^ grid[i][j + 1]) res++;
			if (i - 1<0 && grid[i][j]) res++;
			if (j - 1<0 && grid[i][j]) res++;
			if (i + 1 >= h && grid[i][j]) res++;
			if (j + 1 >= w && grid[i][j]) res++;
		}
	}
	cout << res << endl;
	return res;
}
int main463A0() {
	vector<vector<int>>grid = { { 0,1,0,0 },{ 1,1,1,0 },{ 0,1,0,0 },{ 1,1,0,0, } };
	islandPerimeterII(grid);


	system("pause");
	return EXIT_SUCCESS;
}