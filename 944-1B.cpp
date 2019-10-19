#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

//944题，找出需要删除的列，删除列中的元素并打印*********
vector<string> minDeletionSize(vector<string> &A)
{
	int count = 0;
	int m = A.size() - 1;
	int n = A[0].size();
	vector<int>B;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (A[j][i]>A[j + 1][i])
			{
				B.push_back(i);
				count++;
				break;
			}
		}
	int q = B.size();
	for (int i = 0; i < B.size(); i++)
	{
		cout << B[i] << endl;
	}
	for (int i = 0; i < q; i++)     
	{
		int c = B[i];
		cout << c << endl;
		for (int j = 0; j < m+1; j++)   //遍历A
		{
			A[j][c] = '0';
		}
	}
	for (int i = 0; i < m + 1; i++)
		cout << A[i] << endl;
	for (int i = 0; i < n; i++)            //m = A.size() - 1 ;           n = A[0].size();
		for (int j = 0; j < m+1; j++)
		{
			if (A[j][i]=='0')
			{
				for (int k = i; k < n; k++)
				{
					A[j][k] = A[j][k + 1];
				}
			}
		}
	for (int i = 0; i < m+1; i++)
		cout << A[i] << endl;
	return A;
}
int main94401b() {

	vector<string>A = { "cbads", "daffa", "ghihe" };
	minDeletionSize(A);

	system("pause");
	return EXIT_SUCCESS;
}