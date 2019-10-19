#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isPalindrome(int x)
{
	vector<int> temp;
	if (x < 0)
	{
		cout << "false" << endl;
		return false;
	}
	if (x = 0)
	{
		cout << "true" << endl;
		return true;
	}
	int n = x;
	while (n)
	{
		int num = n % 10;
		temp.push_back(num);
		n = n / 10;
	}
	vector<int>::iterator iter1, iter2;
	iter1 = temp.begin();
	iter2 = temp.end() - 1;
	while (*iter1 == *iter2)
	{
		if (iter1 == iter2 || iter2-iter1==1)
		{
			cout << "true" << endl;
			return true;
		}
		else
		{
			iter1++;
			iter2--;
		}

	}
	cout << "false" << endl;
	return false;
}

int main9B() {
	int x = 2334455667665544332;
	isPalindrome(x);


	system("pause");
	return EXIT_SUCCESS;
}