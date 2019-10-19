#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<vector<int>> transpose1(vector<vector<int>> &A)
{
	vector<vector<int>>res;
	res.clear();
	for (int j = 0; j < A[0].size(); j++)
	{
		res.push_back(vector<int>());
		for (int i = 0; i < A.size(); i++)
			res[j].push_back(A[i][j]);
	}
	return res;
}
int main867A() {



	system("pause");
	return EXIT_SUCCESS;
}