#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>	
#include<conio.h>
#include<string>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>&nums, int r, int c)
{
	vector<vector<int>>ans;
	if (r*c != nums.size()*nums[0].size())
		return nums;
	for (int i = 0; i < r; ++i)
	{
		vector<int>res;
		for (int j = 0; j < c; ++j)
		{
			int num = (i*r) + j;
			int m = num / nums[0].size();
			int n = num-(m*nums[0].size());
			res.push_back(nums[m][n]);
		}
		ans.push_back(res);
	}
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			cout << ans[i][j] << endl;
	return ans;
}

int main566B() {

	vector<vector<int>>nums = { {1,2},{3,4} };
	int r = 2, c = 4;
	matrixReshape(nums, r, c);


	system("pause");
	return EXIT_SUCCESS;
}