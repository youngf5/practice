#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
#include<set>
using namespace std;


int numUniqueEmails(vector<string> &A)
{
	int count = 0;
	string ans="";
	set<string> s;
	for (int k = 0; k < A.size(); k++)
	{
		for (int i = 0; i < A[k].size(); i++)
		{
			if (A[k][i] == '@')
			{
				count = i;
				break;
			}
		}
		for (int i = 0; i < count; i++)
		{
			if (A[k][i] == '+')
				break;
			else if (A[k][i] != '\0'&&A[k][i] != '.')
				ans += A[k][i];
			
		}
		ans = ans + "@";
		for (int j = count + 1; j < A[k].size(); j++)
		{
			ans = ans + A[k][j];
		}
		cout << ans << endl;
		s.insert(ans);
		ans = "";
	}

	cout << s.size() << endl;
	return s.size();


}
int main929B() {
	vector<string>A = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" ,"t+est.email+alex@leetcode.com","tes+t.ema.il+alex@leetcode.com"};
	numUniqueEmails(A);

	system("pause");
	return EXIT_SUCCESS;
}