#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

int peakIndexInMountain(vector<int> &A)
{
	int begin = 1;                                      //**********二分法查找**************
	int end = A.size() - 2;
	while (begin < end)
	{
		int mid = (begin + end) / 2;
		if (A[mid]>A[mid + 1])
			end = mid;
		if (A[mid] < A[mid + 1])
			begin = mid+1;
	}
	cout << begin << endl;
	return begin;
}
int main852A() {
	vector<int>A = { 0,1,0 };
	peakIndexInMountain(A);


	system("pause");
	return EXIT_SUCCESS;
}