#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>SortSquareA(vector<int> &A)
{
	for (int i = 0; i < A.size(); i++)
	{
		A[i] = A[i] * A[i];
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;
	return A;
}
int main977A() {

	vector<int>A = { -4,-1,0,3,10 };
	SortSquareA(A);

	system("pause");
	return EXIT_SUCCESS;
}