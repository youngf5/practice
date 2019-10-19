#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include<string>
using namespace std;

class Solution
{
public:
	vector<string> removeComments(vector<string> &source)
	{
		for (int i = 0; i < source.size(); ++i)
		{
			for (int j = 0; j < source[i].size(); ++j)
			{
				if (source[i][j] == '/' && source[i][j + 1] == '/')
				{
					for (int k = j + 2; k < source[i].size(); ++k)
					{
						if (source[i][k] != '\n')
						{
							source[i].erase(source[i][k]);
						}
					}
					break;
				}
				else if (source[i][j] == '/' && source[i][j + 1] == '*')
				{
					
					for (int k = j + 2; k < source[i].size(); ++k)
					{
						if (source[i][k] != '*' && source[i][k + 1] != '/')
						{
							source[i].erase(source[i][k]);
							if (k == source[i].size() - 1)
							{
								k = 0;
								i = i + 1;
							}
						}
						
					}
				}
			}
		}
	}
};

int main() {

	Solution s;
	s.removeComments()

	system("pause");
	return EXIT_SUCCESS;
}