#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<vector<int>> transpos(vector<vector<int>> &A)
{
	if (A.empty())                            //判断A是否为空
		return A;
	int m = A.size();
	int n = A[0].size();
	vector<int>B(m, 0);                      //vector<vector<int>>   初始化操作；
	vector<vector<int>>C(n, B);
	/*cout << m << " " << n << endl;*/
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A[i].size(); j++)
		{
			
				/*int temp = A[i][j];
				A[i][j] = A[j][i];
				A[j][i] = temp;*/
				C[j][i] = A[i][j];
			
		}
	}
	//for (int i = 0; i < A.size(); i++)
	//{
	//	for (int j = 0; j < A[i].size(); j++)
	//	{
	//		cout << A[i][j] << ' ';
	//	}
	//	cout << endl;
	//}
	for (int i = 0; i < C.size(); i++)
	{
		for (int j = 0; j < C[0].size(); j++)
		{
			cout << C[i][j]<<" ";
		}
		cout << endl;
	}
	return C;
}

int main867B() {
	vector<vector<int>>A = { {1, 2, 3}, { 4, 5, 6} };
	transpos(A);


	system("pause");
	return EXIT_SUCCESS;
}