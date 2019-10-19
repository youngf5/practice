#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

vector<int>sortArrayByParity(vector<int>& A)
{
	vector<int>B;
	int j = 0;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] % 2 == 0)
		{
			B.push_back(A[i]);
			j++;
		}
	}
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] % 2 != 0)
			B.push_back(A[i]);
	}
	for (int i = 0; i < B.size(); i++)
		cout << B[i] << endl;
	return B;
}
int main805B() {
	vector<int>A = { 3,1,2,5,4,7,9 };
	sortArrayByParity(A);


	system("pause");
	return EXIT_SUCCESS;
}