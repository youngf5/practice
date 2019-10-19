#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<queue>
using namespace std;

bool isPalindromeI(int x)
{
	if (x < 0)
	{
		cout << "false" << endl;
		return false;
	}
	queue<int>mm;
	int len = 0;
	int copy = 0;
	for (int i = x; i; i /= 10)
		++len;
	for (int j = len / 2; j > 0; --j)
	{
		mm.push(x % 10);
		x /= 10;
	}
	if (len % 2 == 1)
		x /= 10;
	for (int j = len / 2; j > 0; --j)
	{
		copy = copy * 10 + mm.front();
		mm.pop();
	}
	if (copy == x) {
		cout << "true" << endl;
		return true;
	}
	cout << "false" << endl;
	return false; 
}

int main9A() {
	int x = 2334455667665544332;
	isPalindromeI(x);


	system("pause");
	return EXIT_SUCCESS;
}