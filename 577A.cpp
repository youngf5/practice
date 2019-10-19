#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;


string reverseWords1(string s)
{
	string ans = "";
	string temp = "";
	int l = s.size();
	for (int i = 0; i <= l; i++)
	{
		if (s[i] == ' ' || s[i] == '\0')
		{
			reverse(temp.begin(), temp.end());    //reverse()函数调换首尾元素，temp.begin(),temp.end();
			ans += temp;
			ans += s[i];
			temp = "";                            //字符串翻转完之后将temp置空
		}
		else
			temp += s[i];                         //不为空格或者'\0'时，把元素放入temp中
	}
	cout << ans << endl;
	return ans;
}
int main577A1() {
	string s = "Let's take LeetCode context";
	reverseWords1(s);


	system("pause");
	return EXIT_SUCCESS;
}