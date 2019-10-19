#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//只进行了一次循环，时间复杂度低**********
vector<int> sumEvenAfterQueriesI(vector<int> &A, vector<vector<int>> &queries)
{
	vector<int>answer;
	int sum = 0;
	for (int j = 0; j < A.size(); ++j)
	{
		if (A[j] % 2 == 0)
			sum += A[j];
	}
	for (int i = 0; i < queries.size(); ++i)
	{
		int val = queries[i][0];
		int index = queries[i][1];
		A[index] += val;

		if (A[index] % 2 == 0)
		{
			if (val % 2 == 0)
				sum += val;
			else
				sum += A[index];
		}
		else
		{
			if (val % 2 != 0)
				sum -= (A[index] - val);
		}
		answer.push_back(sum);
	}
	for (int i = 0; i < answer.size(); ++i)
		cout << answer[i] << endl;
	return answer;
}

int main985A() {

	vector<int> A = { 1,2,3,4 };
	vector<vector<int>>queries = { { 1,0 },{ -3,1 },{ -4,0 },{ 2,3 } };
	sumEvenAfterQueriesI(A, queries);

	system("pause");
	return EXIT_SUCCESS;
}