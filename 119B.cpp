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
		for (int j = i-1; j > 0; --j)                                   //�Ż��ռ临�Ӷ� O(rowIndex)    ֱ����temp�Ͻ��в���****
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