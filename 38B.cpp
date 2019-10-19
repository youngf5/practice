#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string countAndSay(int n)
{
	vector<string> temp;
	temp.push_back("1");
	char mid ;
	int count = 0;
	int count1 = 0;
	string s;
	while (count1 < n)
	{
		s = "";
		int size = temp.size() - 1;
		mid = temp[size][0];
		for (int j = 0; j < temp[size].size(); ++j)
		{
			if (temp[size][j] == mid)
			{
				count++;
			}
			else
			{
				mid = temp[size][j];
				s += to_string(count) + temp[size][j - 1];
				count = 1;
			}
		}
		s += to_string(count) + temp[size][temp[size].size() - 1];
		//cout << s << endl;      //  11    21    
		temp.push_back(s);
		count = 0;
		count1++;               //  1      2
	}
	cout << temp[n-1] << endl;
	return temp[n-1];
}

int main38B() {

	int n = 4;
	countAndSay(n);

	system("pause");
	return EXIT_SUCCESS;
}