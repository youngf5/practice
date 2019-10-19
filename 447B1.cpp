#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//超出时间限制***************时间复杂度过高
int numberOfBoomerangsB(vector<vector<int>> &points)
{
	int count = 0;
	int num = points.size();
	for (int i = 0; i < num; ++i)
	{
		for (int j = i+1; j < num; ++j)
		{
			if (i == j)
				continue;
			for (int k = j+1; k < num; ++k)
			{
				if (j == k || i == k)
					continue;
				int temp = k;
				if ((points[i][0] - points[j][0])*(points[i][0] - points[j][0]) + (points[i][1] - points[j][1])*(points[i][1] - points[j][1])
					== (points[i][0] - points[k][0])*(points[i][0] - points[k][0]) + (points[i][1] - points[k][1])*(points[i][1] - points[k][1]))
				{
					count+=2;
					if ((points[i][0] - points[j][0])*(points[i][0] - points[j][0]) + (points[i][1] - points[j][1])*(points[i][1] - points[j][1])
						== (points[j][0] - points[k][0])*(points[j][0] - points[k][0]) + (points[j][1] - points[k][1])*(points[j][1] - points[k][1]))
						count += 4;
				}
				else if ((points[i][0] - points[j][0])*(points[i][0] - points[j][0]) + (points[i][1] - points[j][1])*(points[i][1] - points[j][1])
					== (points[j][0] - points[k][0])*(points[j][0] - points[k][0]) + (points[j][1] - points[k][1])*(points[j][1] - points[k][1]))
					count+=2;
				else if ((points[i][0] - points[k][0])*(points[i][0] - points[k][0]) + (points[i][1] - points[k][1])*(points[i][1] - points[k][1])
					== (points[j][0] - points[k][0])*(points[j][0] - points[k][0]) + (points[j][1] - points[k][1])*(points[j][1] - points[k][1]))
					count += 2;
				
			}
		}
	}
	cout << count << endl;
	return count;
}

int main447B1() {

	vector<vector<int>> points = { { 0,0 },{ 1,0 },{-1,0} ,{0,1},{0,-1} };          //[[0,0],[1,0],[-1,0],[0,1],[0,-1]]
	numberOfBoomerangsB(points);

	system("pause");
	return EXIT_SUCCESS;
}