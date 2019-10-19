#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<int> sortArrayByPartity(vector<int> &A)
{
	if (A.empty())
		return A;
	int i = 0;
	int j = 1;
	while (1)
	{
		if (i >= A.size() || j >= A.size())
			break;
		while (i<A.size() && A[i]%2==0)               //要先判断i<A.size()再判断A[i]%2==0,不然会内存溢出
		{
			i += 2;
		}
			cout << i << endl;
		while (j<A.size()&& A[j] % 2 == 1)
			j += 2;
		cout << j << endl;
		if (i < A.size() && j < A.size())         //判断是否在vector范围内再进行交换，否则会出现内存溢出(交换操作可以直接使用swap函数)
		{                                         //此if判断可以与循环开始时的判断组成 if，else判断
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	for (int k = 0; k < A.size(); k++)
		cout << A[k] << " ";
	return A;
}
int main922B() {

	vector<int>A = { 4,2,5,7,5,6,7,8 };
	sortArrayByPartity(A);
	system("pause");
	return EXIT_SUCCESS;
}