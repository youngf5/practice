#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<map>
#include<sstream>
#include<string>
using namespace std;

vector<string> uncommonFromSentences(string A, string B)
{
	map<string, int>hashmap;
	vector<string>res;
	string word;
	stringstream out(A + " " + B);                   //*******流的使用*********
	while (out >> word)
		hashmap[word]++;
	for (auto iter = hashmap.begin(); iter != hashmap.end(); iter++)
		if (iter->second == 1)
			res.push_back(iter->first);
	for (int i = 0; i < res.size(); ++i)
		cout << res[i] << endl;
	return res;
}

int main884A() {

	string A = "this apple is sweet";
	string B = "this apple is sour";
	uncommonFromSentences(A, B);

	system("pause");
	return EXIT_SUCCESS;
}