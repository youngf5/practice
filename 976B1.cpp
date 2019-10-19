#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int largestPerimeterB1(vector<int> &A)
{
	sort(A.rbegin(), A.rend());             
	for (int i = 0; i < A.size() - 2; ++i)
	{
		int m = i;
		int a = A[m];                         
		int b = A[m+1];
		int c = A[m+2];
		/*排序之后前三个数不能组成三角形，直接跳过第一个数，不需要将后两个数后移，因为最大的三个数不能组成三角形，
		后面比它还小的数也不能组成*/									  
		if (a + b > c&&a + c > b&&b + c > a)
		{
			cout << a + b + c << endl;
			return a + b + c;           
		}

	}
	return 0;
}

int main976B1() {

	vector<int> A = { 3,2,3,4 };
	largestPerimeterB1(A);

	system("pause");
	return EXIT_SUCCESS;
}