#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;


vector<int> shortestToCharI(string s, char c)
{
	vector<int>nums1;
	vector<int>nums2;
	int size_1 = s.size();
	for (int i = 0; i < size_1; i++)
	{
		if (s[i] == c)
			nums1.push_back(i);
	}
	int size_2 = nums1.size();
	for (int j = 0; j < size_1; j++)
	{
		int number_min = 100000;
		for (int k = 0; k < size_2; k++)
		{
			int temp = nums1[k] - j;
			if (abs(temp) < number_min)
				number_min = abs(temp);
		}
		nums2.push_back(number_min);
	}
	return nums2;
}
int main821A() {



	system("pause");
	return EXIT_SUCCESS;
}