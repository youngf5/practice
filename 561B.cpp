#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

int arrPairSum(vector<int> &A)
{
	int sum = 0;
	for (int i = 0; i < A.size()-1; i++)
	{
		for (int j = i; j < A.size() - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	int k = 0;
	while (k < A.size())
	{
		sum += A[k];
		k += 2;
	}
	
	cout << sum << endl;
	return sum;
}
int main561B() {
	vector<int>A = { 1,4,3,2,6,8,13,15 };
	arrPairSum(A);


	system("pause");
	return EXIT_SUCCESS;
}