#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

int islandPerimeter(vector<vector<int>> &grid)
{
	if (grid.empty())
		return -1;
	int circle = 0;
	for (int i = 0; i < grid.size(); ++i)
		for (int j = 0; j < grid[i].size(); ++j)
		{
			if (grid[i][j] == 1)          //0  1
			{
				if (i - 1 < 0)
				{
					circle++;

				}
				else if (grid[i - 1][j] == 0)
					circle++;
				if (i + 1 > grid.size() - 1)
				{
					circle++;
				}
				else if (grid[i + 1][j] == 0)
					circle++;
				if (j - 1 < 0)
				{
					circle++;
				}
				else if (grid[i][j - 1] == 0)
					circle++;
				if (j + 1 > grid[i].size() - 1)
				{
					circle++;
				}
				else if (grid[i][j + 1] == 0)
					circle++;
				
			}

		}
	cout << circle << endl;
	return circle;
}
int main463B() {
	vector<vector<int>>grid = { {0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0,} };
	islandPerimeter(grid);

	system("pause");
	return EXIT_SUCCESS;
}