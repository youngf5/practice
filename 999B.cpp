#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

int numRookCaptures(vector<vector<string>> &board)
{
	int count = 0;
	int val, row;
	int a[8] = { 0 };
	for (int i = 0; i < board.size();i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			if (board[i][j] == "R")
			{
				row = i;
				val = j;
			}

		}
	}
	for (int i = val; i < 8; i++)
	{
		if (board[row][i] == "B")
			break;
		if (board[row][i] == "p")
			count = count + 1;
	}
	for (int i = val; i >= 0; i--)
	{
		if (board[row][i] == "B")
			break;
		if (board[row][i] == "p")
			count = count + 1;
	}
	for (int i = row; i < 8; i++)
	{
		if (board[i][val] == "B")
			break;
		if (board[i][val] == "p")
			count = count + 1;
	}
	for (int i = row; i >= 0; i--)
	{
		if (board[i][val] == "B")
			break;
		if (board[i][val] == "p")
			count = count + 1;
	}
	cout << count << endl;
	return count;
}

int main999B() {
	vector<vector<string>>board = { {".", ".", ".", ".", ".", ".", ".", "."},{".", ".", ".", "p", ".", ".", ".", "."},{".", ".", ".", "R", ".", ".", ".", "p"},{".", ".", ".", ".", ".", ".", ".", "."},{".", ".", ".", ".", ".", ".", ".", "."},{".", ".", ".", "p", ".", ".", ".", "."},{".", ".", ".", ".", ".", ".", ".", "."},{".", ".", ".", ".", ".", ".", ".", "."} };
	numRookCaptures(board);
	system("pause");
	return EXIT_SUCCESS;
}