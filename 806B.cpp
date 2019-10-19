#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<int> numberOfLines(vector<int> &widths, string S)
{
	int num = 0;
	int count = 0;
	vector<int>ans;
	for (int i = 0; i < S.size(); ++i)
	{
		int snum = S[i] - 'a';
		count += widths[snum];
		if (count > 100)
		{
			num++;
			i--;
			count = 0;
		}
		if (i == S.size() - 1)
			ans.push_back(count);
	}
	num += 1;
	ans.push_back(num);
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << endl;
	return ans;
}

int main806B() {
	vector<int>widths = { 4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10 };
	string S = "bbbcccdddaaa";
	numberOfLines(widths,S);


	system("pause");
	return EXIT_SUCCESS;
}