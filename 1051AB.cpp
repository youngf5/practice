#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int HeightChecker(vector<int> &A)
{
	vector<int>B = A;
	sort(B.begin(), B.end());
	int m = 0;
	for (int i = 0; i < B.size();i++)
	{
		if (B[i] != A[i])
			m++;
	}
	cout << m << endl;
	return m;
}
int main1051AB() {
	vector<int>A = { 1,1,4,2,1,3 };
	HeightChecker(A);


	system("pause");
	return EXIT_SUCCESS;
}