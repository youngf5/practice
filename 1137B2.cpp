#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<iterator>
#include<vector>
using namespace std;
//感觉自己写的这个代码简直是至今所写代码的巅峰
int tribonacciB2(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	vector<int> temp;
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(1);
	for (int i = 3; i <= n; ++i)
	{
		auto it = back_inserter(temp);    //back_inserter   插入迭代器，在头文件iterator中，它将赋值给它的元素直接插入到容器中，不会因为容量不足造成未定义的错误

		 *it = temp[i - 1] + temp[i - 2] + temp[i - 3];
	}
	return temp[n];
}

int main1137B2() {

	int n = 37;
	int res = tribonacciB2(n);
	cout << res << endl;

	system("pause");
	return EXIT_SUCCESS;
}