#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
#include<limits>
using namespace std;

vector<string> findWords(vector<string> &A)
{
	vector<string>B = { "qwertyuiop","asdfghjkl","zxcvbnm" };
	vector<string>C;
	int k=10;
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A[i].size(); j++)
		{
			if (A[i][j] >= 'A'&&A[i][j]<='Z')
				A[i][j] += 32;
		}
		if (B[0].find(A[i][0])!=-1)
		{
			k = 0;
		}
		else if (B[1].find(A[i][0])!=-1)
		{
			k = 1;
		}
		else if (B[2].find(A[i][0])!=-1)
		{
			k = 2;;
		}
		for (int j = 1; j < A[i].size(); j++)
		{
			if (B[k].find(A[i][j]) == -1)
			{
				break;
			}
			else if (j == (A[i].size()-1))
				cout << A[i] << endl;
		}
	}
	//	if (k != -1)                                       ******第二种，利用k的值来判断要查询的单词是否在键盘中的一行内*******
	//		C.push_back(A[i]);
	//for (int i = 0; i < C.size(); i++)
	//	cout << C[i] << endl;
	//
		
	return C;
}



int main500() {
	vector<string>A = { "Hello", "Alaska", "Dad", "Peace" };
	findWords(A);

	system("pause");
	return EXIT_SUCCESS;
}