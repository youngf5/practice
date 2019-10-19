#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

int projectionArea(vector<vector<int>> &grid)
{
	int top = 0, front = 0, side = 0,front_max=0,side_max=0,area=0;
	for (int i = 0; i < grid.size(); ++i)
	{
		for (int j = 0; j < grid[i].size(); ++j)
		{
			if (grid[i][j] != 0)
				top++;
			if (front_max < grid[i][j])
				front_max = grid[i][j];
			if (side_max < grid[j][i])
				side_max = grid[j][i];
		}
		front +=front_max;
		side += side_max;
	}
	area = top + front + side;
	cout << area << endl;
	return area;
}

int main883B() {

	vector<vector<int>>grid = { {1,1,1},{1,0,1},{1,1,1} };
	projectionArea(grid);

	system("pause");
	return EXIT_SUCCESS;
}