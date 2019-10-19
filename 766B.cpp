#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

bool isToeplitzMatrix(vector <vector<int>> &matrix)
{
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[0].size(); ++j)
		{
			int m = i;
			int n = j;
			while (m < matrix.size()-1 && n < matrix[0].size()-1)
			{
				if (matrix[m][n] != matrix[m+1][n+1])
				{
					cout << 0 << endl;
					return false;
				}
				else {
					++m;
					++n;
				}
			}
		}
	}
	cout << 1 << endl;
	return true;
}

int main766B() {

	vector<vector<int>>matrix = { {1,2},{2,2} };
	isToeplitzMatrix(matrix);

	system("pause");
	return EXIT_SUCCESS;
}