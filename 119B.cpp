#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> getRow(int rowIndex)
{
	int count = 0;
	vector<int> temp;
	for (int i = 0; i < rowIndex; ++i)
	{
		temp.push_back(1);
		for (int j = i-1; j > 0; --j)                                   //优化空间复杂度 O(rowIndex)    直接在temp上进行操作****
		{
			temp[j] = temp[j] + temp[j - 1];
		}
		if(i!=0)
			temp.push_back(1);
	
	}
	for (int i = 0; i < rowIndex; ++i)
		cout << temp[i] << endl;
	return temp;
}

int main119B() {

	int rowIndex = 5;
	getRow(rowIndex);


	system("pause");
	return EXIT_SUCCESS;
}