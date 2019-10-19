#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


string shortestCompletingWord(string licensePlate, vector<string> &words)
{
	map<int, string>temp;
	transform(licensePlate.begin(),licensePlate.end(),licensePlate.begin(),tolower);
	for (int i = 1; i < words.size(); ++i)
	{
		for (int j = 0; j < licensePlate.size(); ++j)
		{
			if (licensePlate[j] <= 'z' && licensePlate[j]>='a')
			{
				if (count(licensePlate.begin(), licensePlate.end(), licensePlate[j]) > count(words[i].begin(), words[i].end(), licensePlate[j]))
				{
					//cout << count(licensePlate.begin(), licensePlate.end(), licensePlate[j]) << endl << count(words[i].begin(), words[i].end(), licensePlate[j]) << endl;
					break;
				}
				if (words[i].find(licensePlate[j])==-1)       //find() 返回值，找到的话返回在字符串中的位置，未找到返回-1；***************
					break;
			}
			if(j==licensePlate.size()-1)
				temp.insert(make_pair(words[i].length(),words[i]));
		}
	}
	if (temp.empty())
		return licensePlate;
	for (map<int, string>::iterator it = temp.begin(); it != temp.end(); ++it)
	{
		cout << it->second << endl;
	}
	string s = temp.begin()->second;
	cout << s << endl;
	return s;
}

int main748B() {

	string licensePlate = "Us48323";
	vector<string> words = { "require","us","open","re??st","traditional","center","available","turn","approach","effort" };
	shortestCompletingWord(licensePlate, words);

	system("pause");
	return EXIT_SUCCESS;
}
/*"Us48323" ["require","us","open","re??st","traditional","center","available","turn","approach","effort"]*/