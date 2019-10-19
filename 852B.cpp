#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>	
using namespace std;

int peakIndexInMountainArray(vector<int> &A)
{
	if (A.size() >= 3)
	{
		int j = 0;
		for (int i = 0; i+1 < A.size(); i++)
		{
			if (A[i] > A[i + 1])
				j = i+1;

		}
		for (int i = j; i+1 < A.size(); i++)
		{
			if (A[i] < A[i + 1])
				return -1;
			

		}
		cout << "1" << endl;
		return 0;
	}
	else return -1;
}
int main852B() {

	vector<int>A = { 0,1,0 };
	peakIndexInMountainArray(A);

	system("pause");
	return EXIT_SUCCESS;
}