#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;


vector<vector<int>> generateI(int numRows)
{
	vector<vector<int>>result;
	for (int i = 0; i < numRows; ++i)
	{
		vector<int>temp;
		temp.push_back(1);
		{
			for (int j = i - 1; j > 0; --j)
			{
				temp.push_back(result[i - 1][j] + result[i - 1][j - 1]);
			}
			if (i != 0)
				temp.push_back(1);
			result.push_back(temp);
		}

		return result;
	}
}
int main118A() {
	int numRows = 5;
	generateI(numRows);


	system("pause");
	return EXIT_SUCCESS;
}