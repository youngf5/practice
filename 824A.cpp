#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_set>
#include<string>
#include<sstream>
using namespace std;

string toGoatLatinA(string s)
{
	unordered_set<char> vowels = { 'a','A','e','E','i','I','o','O','u','U' };      //����һ��unordered set �������洢Ԫ����ĸ**
	istringstream ss(s);                                    //�������������ҳ�ʼ��
	string temp, ans;
	string str = "ma";
	while (ss>>temp)                                      //while�е��������Ҫ��һ����ת���ɲ������͵���� ,���дΪwhile(temp) ����temp����ת���ɲ�������
	{
		str += "a";
		if (vowels.find(temp[0]) != vowels.end())          //����find������Ԫ����ĸ��������Ҫ�ж��Ƿ����vowels.end()
			ans += temp + str + " ";
		else ans += temp.substr(1) + temp[0] + str + " ";     //temp.substr(num1,num2) ,  substr����������ȡ�ַ�����num1��ʾ��ʼ��ȡ��λ�ã�num2��ʾ��ȡ�ĳ���
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