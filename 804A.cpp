#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
#include<set>	
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
	vector<string>cipher = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-        ","..-","...-",".--","-..-","-.--","--.." };
	set<string>result;    //vector ,set ������ʹ��
	for (int i = 0; i < words.size(); i++)
	{
		string s = "";
		for (int j = 0; j < words[i].size(); j++)
		{
			s += cipher[words[i][j] - 'a'];    //cipher[words[i][j]-'a']   a�ַ���''
		}
		result.insert(s);	//set�Ĳ��뺯����set  �����ظ���set
	}
	cout << result.size()<<endl;
	return result.size();
}
int main804A() {
	vector<string> words = { "gin","zen","gig","msg" };
	uniqueMorseRepresentations(words);
	

	system("pause");
	return EXIT_SUCCESS;
}