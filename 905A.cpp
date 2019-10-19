#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;
vector<int>sortArrayByParity1(vector<int>&A)      //***********°´ÆæÅ¼ÅÅÐòÊý×é****************
{
	int i = 0, j = A.size() - 1;
	while (i < j)
	{
		while (A[i] % 2 == 0 && i < j) i++;
		while (A[j] % 2 == 1 && i < j) j--;
		swap(A[i], A[j]);
	}
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;
	return A;
}
int main905A() {
	vector<int>A = { 3,1,2,5,4,7,9 };
	sortArrayByParity1(A);



	system("pause");
	return EXIT_SUCCESS;
}