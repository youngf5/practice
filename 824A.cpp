#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_set>
#include<string>
#include<sstream>
using namespace std;

string toGoatLatinA(string s)
{
	unordered_set<char> vowels = { 'a','A','e','E','i','I','o','O','u','U' };      //定义一个unordered set 容器来存储元音字母**
	istringstream ss(s);                                    //定义输入流并且初始化
	string temp, ans;
	string str = "ma";
	while (ss>>temp)                                      //while中的条件语句要是一个能转换成布尔类型的语句 ,如果写为while(temp) 报错：temp不能转换成布尔类型
	{
		str += "a";
		if (vowels.find(temp[0]) != vowels.end())          //利用find函数找元音字母，并且需要判断是否等于vowels.end()
			ans += temp + str + " ";
		else ans += temp.substr(1) + temp[0] + str + " ";     //temp.substr(num1,num2) ,  substr函数用来截取字符串，num1表示开始截取的位置，num2表示截取的长度
	}
	ans.pop_back();
	cout << ans << endl;
	return ans;
}

int main824A() {
	string s = "The quick brown fox jumped over the lazy dog";
	toGoatLatinA(s);


	system("pause");
	return EXIT_SUCCESS;
}