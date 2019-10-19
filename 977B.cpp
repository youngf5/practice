#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

vector<int>SortSquare(vector<int> &A)
{
	
	for (int i = 0; i < A.size();i++)
		A[i] = A[i] * A[i];
	for (int i = 0; i < A.size()-1; i++)
	{
		for (int j = 0; j < A.size()-i-1; j++)
		{
			if (A[j] > A[j+1])
			{
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;
	return A;
}

int main977B() {
	vector<int>A = { -4,-1,0,3,10 };
	SortSquare(A);

	system("pause");
	return EXIT_SUCCESS;
}