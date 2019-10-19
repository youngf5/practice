#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<algorithm>
#include<string>
using namespace std;

vector<int>relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
	vector<int> arr3;
	vector<int> arr4;
	int k = 0;
	for (int i = 0; i < arr2.size(); ++i)
	{
		for (int j = k; j < arr1.size(); ++j)
		{
			if (arr1[j] == arr2[i])
			{
				int temp = arr1[k];
				arr1[k] = arr1[j];
				arr1[j] = temp;
				++k;
			}
		}
	}

	sort(arr1.begin() + k, arr1.end());              //arr1.begin()+k    也可以这样使用
	//for (int i = k - 1; i < arr1.size(); ++i)
	//{
	//	arr3.push_back(arr1[i]);
	//}
	//sort(arr3.begin(), arr3.end());
	//for (int i = 0; i < k-1; ++i)
	//	arr4.push_back(arr1[i]);
	//for (int i = 0; i < arr3.size(); ++i)
	//	arr4.push_back(arr3[i]);
	for (int i = 0; i < arr1.size(); ++i)
	{
		cout << arr1[i] << endl;
	}
	return arr4;
}

int main1122B() {

	vector<int> arr1 = { 2,3,1,3,2,4,6,7,9,2,19 };
	vector<int> arr2 = { 2,1,4,3,9,6 };

	relativeSortArray(arr1, arr2);

	system("pause");
	return EXIT_SUCCESS;
}