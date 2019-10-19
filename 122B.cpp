#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void duplicateZerosB(vector<int> &arr)
{
	int i = 0;
	while(i<arr.size())
	{
		if (arr[i] == 0)
		{
			int size = arr.size() - 1;
			while (size != i)
			{
				arr[size] = arr[size - 1];
				size = size - 1;
			}
			i += 2;
		}
		else ++i;
	}
	for (int i = 0; i < arr.size(); ++i)
		cout << arr[i] << endl;
}

int main122B() {

	vector<int> arr = { 0,4,1,0,0,8,0,0,3 };       //1 0 0 2 3 0 0 4
	duplicateZerosB(arr);

	system("pause");
	return EXIT_SUCCESS;
}