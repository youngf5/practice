#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;

bool JudgeCircle(string moves)
{
	int i = 0, j = 0;
	for (int k = 0; k < moves.size(); k++)
	{
		switch (moves[k])
		{
		case 'L':
			i++;
			break;
		case 'R':
			i--;
			break;
		case 'U':
			j++;
			break;
		case 'D':
			j--;
			break;
		}
	}
	if (i == 0 && j == 0)
	{
		cout << 0 << endl;
		return true;
	}
	else {
		cout << -1 << endl;
		return false;
	}

	
}
int main657B() {
	string moves = "RRRLLLUUUDD";
	JudgeCircle(moves);


	system("pause");
	return EXIT_SUCCESS;
}