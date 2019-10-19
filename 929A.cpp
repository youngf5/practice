#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;

int numUniqueEmails1(vector<string> &emails)
{
	set<string> ans;
	for (int i = 0; i < emails.size(); i++)
	{
		string temp = "";
		int flag = 0;
		for (int j = 0; j < emails[i].size(); j++)
		{
			if (emails[i][j] == '+')                  //遇到+号之后，temp不加任何元素
				flag = 1;
			if (emails[i][j] == '@')                 //遇到@之后，temp加任何元素
				flag = 2;
			switch (flag)                             //*******************************需要掌握***********
			{
			case 0:
				if (emails[i][j] == '.')
					temp += emails[i][j];
				break;
			case 1:
				break;
			case 2:
				temp += emails[i][j];
				break;
			}
		}
		cout << temp << endl;
		ans.insert(temp);
	}
	cout << ans.size() << endl;
	return ans.size();
}
int main929A() {
	vector<string>A = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" ,"t+est.email+alex@leetcode.com","tes+t.ema.il+alex@leetcode.com" };
	numUniqueEmails1(A);


	system("pause");
	return EXIT_SUCCESS;
}