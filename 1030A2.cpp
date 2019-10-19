#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<vector<int>>allCellsDistOrderIII(int R, int C, int r0, int c0)
{
	int distance = 0;
	vector<vector<int>>output;
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			distance = abs(i - r0) + abs(j - c0);
			output.push_back({ i,j });
		}
	}
	//********Ê¹ÓÃLambdaº¯Êý*************
	sort(output.begin(), output.end(), [&](vector<int>&A, vector<int>&B) {return(abs(A[0] - r0) + abs(A[1] - c0) < abs(B[0] - r0) + abs(B[1] - c0)); });
	
	return output;
}

int main1030A2() {

	int R = 2, C = 3, r0 = 1, c0 = 2;
	allCellsDistOrderIII(R, C, r0, c0);

	system("pause");
	return EXIT_SUCCESS;
}