#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std;

vector<int> relativeSortArrayI(vector<int> &arr1, vector<int> &arr2)
{
	vector<int> temp;
	vector<int>::iterator iter;                         //迭代器的定义   vector<int>::iterator iter;
	for (int i = 0; i < arr2.size(); ++i)
	{
		for (int j = 0; j < arr1.size(); ++j)
		{
			iter = find(arr1.begin(), arr1.end(), arr2[i]);           //find函数，返回一个迭代器
			if (iter != arr1.end())
			{
				temp.push_back(arr2[i]);
				arr1.erase(iter);                                      //erase函数，删除元素，返回迭代器的下一个迭代器
			}

		}
	}
	sort(arr1.begin(), arr1.end());
	temp.insert(temp.end(), arr1.begin(), arr1.end());                  //insert函数的使用    insert(temp.end(),arr1.begin(),arr1.end())
	

	for (int i = 0; i < temp.size(); ++i)
		cout << temp[i] << endl;
	return temp;
}

int main1122A1() {

	vector<int> arr1 = { 2,3,1,3,2,4,6,7,9,2,19 };
	vector<int> arr2 = { 2,1,4,3,9,6 };

	relativeSortArrayI(arr1, arr2);

	system("pause");
	return EXIT_SUCCESS;
}