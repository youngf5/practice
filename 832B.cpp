#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>	
using namespace std;

vector<vector<int>> flipAndInvertImage1(vector < vector<int>> &A)
{
	for (int i = 0; i < A.size(); i++)
	{
		int j = 0;
		int temp = A[i][j];
		A[i][j] = A[i][A[i].size() - 1];
		A[i][A[i].size() - 1] = temp;
		
		for (int k = 0; k < A[i].size(); k++)
		{
			if (A[i][k] == 0)
				A[i][k] = 1;
			else A[i][k] = 0;
		}
	}
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A[i].size(); j++)
			cout << A[i][j];
		cout << endl;
	}
	return A;
}
int main832B() {
	vector<vector<int>>A = { {1,1,0},{1,0,1},{0,0,0} };
	flipAndInvertImage1(A);

	system("pause");
	return EXIT_SUCCESS;
}
/*
						
                        //vector<vector<int>>正确的插入方式
                        vector<vector<int> > A;
                        //A.push_back里必须是vector
                        vector<int> B;
						B.push_back(0);
                        B.push_back(1);
						B.push_back(2);
						A.push_back(B);
						B.clear();
						B.push_back(3);
						B.push_back(4);
						B.push_back(5);
						A.push_back(B);
*/