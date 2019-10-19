#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int findLUSlength(string a, string b)
{
	int max = 0;
	for (int i = 0; i < a.length(); ++i)
	{
		int count = 0;
		int k = i;
		for (int j = 0; k<a.length()&&j < b.length(); ++j)
		{
			if (a[k] != b[j])
			{
				count++;
				k++;
			}
			else
			{
				if (count > max)
					max = count;
				k = i;
				j = 0;
			}
		}
		if (count > max)
			max = count;
	}
	cout << max << endl;
	return max;
}
int main521B() {
	string a = "aba";
	string b = "cdc";
	findLUSlength(a, b);


	system("pause");
	return EXIT_SUCCESS;
}