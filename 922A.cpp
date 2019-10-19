#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;


vector<int> sortArrayByParityI(vector<int> &A)
{
	int pre1 = 1, pre2 = 0, alen = A.size();
	while (true)
	{
		while (pre2 < alen&&!(A[pre2] & 1))
			pre2 += 2;
		while (pre1 < alen&&A[pre1] & 1)
			pre1 += 2;
		if (pre1 < alen || pre2 < alen)
			swap(A[pre1], A[pre2]);
		else
			break;
	}
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;
	return A;
}
int main922A() {
	vector<int>A = { 4,2,5,7,5,6,7,8 };
	sortArrayByParityI(A);


	system("pause");
	return EXIT_SUCCESS;
}