#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;


string reverseWords3(string s)
{
	s.append(" ");                       //append()函数，向字符串末尾添加元素
	for (int i = 0, begin = 0, end = 0; i < s.length(); i++)
	{
		if (s[i] == ' ' || s[i] == '\0')
		{
			end = i - 1;
			while(begin<end)
				swap(s[begin++] ,s[end--]);         //swap（）函数交换两个元素的位置
			begin = i + 1;
		}
	}
	s.pop_back();                                //弹出字符串最后一个元素
	cout << s << endl;
	return s;
}
int main577A2() {

	string s = "Let's take LeetCode context";
	reverseWords3(s);
	system("pause");
	return EXIT_SUCCESS;
}