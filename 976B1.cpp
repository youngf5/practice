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
		/*����֮��ǰ������������������Σ�ֱ��������һ����������Ҫ�������������ƣ���Ϊ����������������������Σ�
		���������С����Ҳ�������*/									  
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