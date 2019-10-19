#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<vector<int>> generate(int numRows)
{
	vector<vector<int>>B;
	for (int i = 0; i < numRows; ++i)
	{
/*		if (i == 0)
		{
			A.push_back(1);
			continue;
		}*/
		vector<int>A;                       //vector<int>A  需要定义在循环体内部，这样才会被初始化，如果定义在外部，进入循环时将不会被初始化
		A.push_back(1);
		for (int j = 1; j < i; ++j)
		{
			/*cout << B[i - 1][j - 1] << "   " << B[i - 1][j] << endl;*/
			/*int temp = B[i - 1][j - 1] + B[i - 1][j];*/
			A.push_back(B[i - 1][j] + B[i - 1][j - 1]);
		}
		if (i != 0)
		{
			A.push_back(1);
		}
		B.push_back(A);
	}
	for (int i = 0; i < numRows; ++i)
	{
		for (int j = 0; j < i+1; ++j)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	return B;
}

int main118B() {
	int numRows = 5;
	generate(numRows);


	system("pause");
	return EXIT_SUCCESS;
}