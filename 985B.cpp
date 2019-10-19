#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//*****时间复杂度过大**********
vector<int> sumEvenAfterQueries(vector<int> &A, vector<vector<int>> &queries)
{
	vector<int> ans;
	for (int i = 0; i < queries.size(); ++i)
	{
		int sum = 0;
		int val = queries[i][0];
		int idx = queries[i][1];
		A[idx] = A[idx] + val;
		for (int j = 0; j < A.size(); ++j)
		{
			if (A[j] % 2 == 0)
			{
				sum += A[j];
			}
		}
		ans.push_back(sum);
	}
	for (int i = 0; i < A.size(); ++i)
		cout << ans[i] << endl;
	return ans;
}

int main985B() {

	vector<int> A = { 1,2,3,4 };
	vector<vector<int>>queries = { {1,0},{-3,1},{-4,0},{2,3} };
	sumEvenAfterQueries(A, queries);


	system("pause");
	return EXIT_SUCCESS;
}