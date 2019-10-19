#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<int>numberOfLinesI(vector<int> &widths, string S)
{
	vector<int> res = { 1,1 };
	int rowLen = 0;
	for (int i = 0; i < S.size(); ++i)
	{
		int cur = widths[S[i] - 'a'];
		if (rowLen + cur > 100)
		{
			res[0]++;
			rowLen = cur;
		}
		else
			rowLen += cur;
	}
	res[1] = rowLen;
	for (int i = 0; i < res.size(); ++i)
		cout << res[i] << endl;
	return res;
}

int main806A() {
	vector<int>widths = { 4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10 };
	string S = "bbbcccdddaaa";
	numberOfLinesI(widths, S);


	system("pause");
	return EXIT_SUCCESS;
}