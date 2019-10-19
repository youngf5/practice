#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

int islandPerimeterI(vector<vector<int>> &grid)
{
	if (grid.empty())
		return 0;
	int result = 0;
	int hei = grid.size();
	for (int i = 0; i < hei; ++i)
	{
		vector<int> &row = grid[i];
		for (int j = 0; j < row.size(); ++j)
		{
			if (row[j])
			{
				result += 4;
				if (j > 0 && row[j - 1])      //两个为1的位置相邻，结果减2；
					result -= 2;
				if (i > 0 && grid[i - 1][j])
					result -= 2;
			}
			
		}
	}
	cout << result << endl;
	return result;
}

int main463A1() {

	vector<vector<int>>grid= { { 0,1,0,0 },{ 1,1,1,0 },{ 0,1,0,0 },{ 1,1,0,0, } };
	islandPerimeterI(grid);

	system("pause");
	return EXIT_SUCCESS;
}