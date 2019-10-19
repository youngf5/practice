#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

int repeatedNTimes(vector<int>& A)
{
	int n = A.size();
	int m = n / 2;
	for (int i = 0; i < m + 2; i++)
	{
		for (int j = 0; j < m + 2; j++)
		{
			if (A[i] == A[j] && i != j)
			{
				cout << A[i] << endl;
				n = A[i];
				return n;
			}
		}
	}
}
int main961B() {
	vector<int>A = { 1,2,3,3 };
	repeatedNTimes(A);


	system("pause");
	return EXIT_SUCCESS;
}