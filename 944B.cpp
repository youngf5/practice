#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

int minDeletionSize(vector<string> &A)
{
	int count = 0;
	int m = A.size();
	int n = A[0].size();
	cout << m << endl << n << endl;
	for (int j = 0; j < n; j++)    //***********j<n-1***********
	{
		for (int i = 0; i < m-1; i++)   //*************i<m-1************
		{
			if (A[i][j]>A[i+1][j])
			{
				count++;
				break;
			}
		}
	}

	cout << count << endl;
	return count;
}
int main944B() {
	vector<string>A = { "cbads", "daffa", "ghihe" };
	minDeletionSize(A);
	

	system("pause");
	return EXIT_SUCCESS;
}