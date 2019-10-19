#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;

int sort_front(string s, char c,int i)
{
	int m = 0;
	for (int j = i; j >= 0; j--)
	{
		if (s[j] != c)
		{
			m++;
		}
		else
			return m;
	}
}


int sort_back(string s, char c, int i)
{
	int n = 0;
	for (int k = i; k < s.size(); k++)
	{
		if (s[k] != c)
		{
			n++;
		}
		else
			return n;
	}
}
vector<int>shortestToChar(string s,char c)
{
	vector<int>B;
	for (int i = 0; i < s.size(); i++)                //loveleetcode
	{
		if (i == 0)
		{
			int m=sort_back(s, c, i);
			B.push_back(m);
		}
		if (i > 0 && i < s.size() - 1)
		{
			int n = sort_back(s, c, i);
			int l = sort_front(s, c, i);
			B.push_back(n < l ? n : l);
		}
		if (i == s.size() - 1)
		{
			int k = sort_front(s, c, i);
			B.push_back(k);
		}

		/*int m=0, n=0;
		for (int j = i; j >= 0; j--)
		{
			if (i == 0)
			{
				m = s.size();
				break;
			}
			if (s[j] != c)
			{
				m++;
			}
			else
				break;
		}*/
		//for (int k = i; k < s.size(); k++)
		//{
		//	if (s[k] != c)
		//	{
		//		n++;
		//	}
		//	else
		//		break;
		//}
	//	B.push_back( m < n ? m : n);
	}
	for (int i = 0; i < B.size(); i++)
		cout << B[i] << " ";
	return B;
}

int main821B() 
{
	string s = "loveleetcodk";
	char c = 'e';
	shortestToChar(s, c);


	system("pause");
	return EXIT_SUCCESS;
}