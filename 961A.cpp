#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int repeatedNTimes1(vector<int>&A)
{
	unordered_set<int> s;       //定义一个无序set容器
	for (auto i : A)
	{
		if (s.find(i) != s.end())
			return i;
		else s.insert(i);
	}
	return 0;
}
int main961A() {

	vector<int>A = { 1,2,3,3 };
	repeatedNTimes1(A);

	system("pause");
	return EXIT_SUCCESS;
}