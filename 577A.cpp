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
			reverse(temp.begin(), temp.end());    //reverse()����������βԪ�أ�temp.begin(),temp.end();
			ans += temp;
			ans += s[i];
			temp = "";                            //�ַ�����ת��֮��temp�ÿ�
		}
		else
			temp += s[i];                         //��Ϊ�ո����'\0'ʱ����Ԫ�ط���temp��
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