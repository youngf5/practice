#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;


int numRookCaptures(vector<vector<char>> &board)
{
	int x = -1, y = -1;
	int flag = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (board[i][j] == 'R')
			{
				x = i;
				y = j;
				flag = 1;      //������ֻ��һ������ͬ��flag�ж��ҵ�֮������ѭ��
				break;
			}
		}
		if (flag == 1)
			break;
	}
	int sum = 0;
	int i = x, j = y;
	//�򱱲���
	while (i >= 0)
	{
		if (board[i][j] == 'B')
			break;
		else if (board[i][j] == 'p')
		{
			sum++;
			break;
		}
		i--;
	}
	i = x, j = y;
	//���ϲ���
	while (i<8)
	{
		if (board[i][j] == 'B')
			break;
		else if (board[i][j] == 'p')
		{
			sum++;
			break;
		}
		i++;
	}

	//��������
	i = x, j = y;
	while (j >= 0)
	{
		if (board[i][j] == 'B')
			break;
		else if (board[i][j] == 'p')
		{
			sum++;
			break;
		}
		j--;
	}

	//�򶫲���
	i = x, j = y;
	while (j<8)
	{
		if (board[i][j] == 'B')
			break;
		else if (board[i][j] == 'p')
		{
			sum++;
			break;
		}
		j++;
	}

	return sum;
}


int main999A() {



	system("pause");
	return EXIT_SUCCESS;
}