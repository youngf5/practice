#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
//超出时间限制******************算法时间复杂度不够低
int largestPerimeter(vector<int> &A)
{
	vector<int> res;
	for (int i = 0; i < A.size() - 2; ++i)
	{
		int m = i;
		int a = A[m];                         //3 2 3 4
		//int b = A[m + 1];
		for (int j = i + 1; j < A.size() - 1; ++j)
		{
			int b = A[j];
			for (int k = j + 1; k < A.size() && k != j; ++k)
			{
				int c = A[k];
				if (a + b > c&&a + c > b&&b + c > a)
				{
					res.push_back(a + b + c);
					cout << a + b + c << endl;             //1 2 2 4 18 8
				}
			}
		}
	}
	if (res.empty())
		return 0;
	sort(res.begin(), res.end());
	int ans = res.back();
	cout << ans << endl;
	return ans;
	
}

int main976B() {

	vector<int> A = { 3,2,3,4 };
	largestPerimeter(A);

	system("pause");
	return EXIT_SUCCESS;
}