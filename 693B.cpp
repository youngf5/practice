#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool hasAlternatingBits(int n)
{
	stack<int> temp;
	while (n) {
		int ret;
		ret = n & 1;
		if (temp.empty() || temp.top() != ret)
		{
			temp.push(ret);
			n >>= 1;
		}
		else
			return false;
	}
	return true;
}

int main693B() {

	int n =11;
	bool ans=hasAlternatingBits(n);
	cout << ans << endl;

	system("pause");
	return EXIT_SUCCESS;
}