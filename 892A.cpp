#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

int surfaceArea(vector<vector<int>> &grid)
{
	int rows = grid.size(), cols = rows, count = 0;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{ 
			//◊‹ ˝
			count += grid[i][j] * 6;
			//z÷·
			if (grid[i][j]>0)
				count -= (grid[i][j] - 1) * 2;
			//y÷·
			if (j + 1 < cols&&grid[i][j] > 0 && grid[i][j + 1]>0)
			{
				if (grid[i][j] < grid[i][j + 1])
					count -= grid[i][j] * 2;
				else
					count -= grid[i][j + 1] * 2;
			}
			//x÷·
			if (i + 1 < rows&&grid[i][j] > 0 && grid[i + 1][j]>0)
			{
				if (grid[i][j] < grid[i + 1][j])
					count -= grid[i][j] * 2;
				else
					count -= grid[i + 1][j] * 2;
			}
		}
	}
	cout << count << endl;
	return count;
}

int main892A() {

	vector<vector<int>> grid = { {1,2},{3,4} };
	surfaceArea(grid);

	system("pause");
	return EXIT_SUCCESS;
}

