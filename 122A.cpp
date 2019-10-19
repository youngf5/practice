#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void duplicateZerosA(vector<int> &arr)
{
	vector<int>zeros;
	int count = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] == 0)
			count++;
		zeros.push_back(count);
	}
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		count = zeros[i];
		if (count > 0)
		{
			if (i + count < arr.size())
			{
				arr[i + count] = arr[i];
			}
			arr[i] = 0;
		}
	}
	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << endl;
}

int main122A() {

	vector<int> arr = { 0,4,1,0,0,8,0,0,3 };       //1 0 0 2 3 0 0 4
	duplicateZerosA(arr);

	system("pause");
	return EXIT_SUCCESS;
}