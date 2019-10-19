#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int arrayPairSum(vector<int> &A)
{
	int sum = 0;
	sort(A.begin(), A.end());           //≈≈–ÚÀ„∑®
	for (int i = 0; i < A.size(); i += 2)
	{
		sum += A[i];
	}
	cout << sum << endl;
	return sum;
}


int main561A() {
	vector<int>A = { 1,4,2,3 };
	arrayPairSum(A);


	system("pause");
	return EXIT_SUCCESS;
}