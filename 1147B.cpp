#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

string removeDuplicates(string S)
{
	stack<char> ans;
	for (int i = 0; i < S.size(); ++i)
	{
		if (ans.empty() || ans.top() != S[i])      //abbaca
		{
			ans.push(S[i]);
			continue;
		}
		if (ans.top() == S[i])
		{
			ans.pop();
			continue;
		}
		ans.push(S[i]);
	}
	string ss;
	int n = ans.size();
	for (int i = 0; i < n; ++i)
	{
		ss.push_back(ans.top());              //ss.append(1,ans.top());    也能实现相同的功能；
		ans.pop();
	}
	reverse(ss.begin(), ss.end());
	cout << ss << endl;
	return ss;
}

int main1147() {

	string S = "abbaca";
	removeDuplicates(S);

	system("pause");
	return EXIT_SUCCESS;
}