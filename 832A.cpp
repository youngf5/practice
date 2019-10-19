#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>>flipAndInvertImage(vector<vector<int>> &A)
{
	for (auto &v:A)            //∑∂Œßfor—≠ª∑±È¿˙
	{
		reverse(v.begin(), v.end());
		for (auto &e : v)
		{
			if (e == 0)
				e = 1;
			else
				e = 0;
				
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
int main832A() {
	vector<vector<int>>B = { { 1,1,1 },{ 1,0,1 },{ 0,0,0 } };
	flipAndInvertImage(B);


	system("pause");
	return EXIT_SUCCESS;
}