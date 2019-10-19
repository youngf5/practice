#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//超出时间限制***************时间复杂度过高
int numberOfBoomerangs(vector<vector<int>> &points)
{
	int count = 0;
	int num = points.size();
	for (int i = 0; i < num; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			if (i == j)
				continue;
			for (int k = 0; k < num; ++k)
			{
				if (j == k || i == k)
					continue;
				int temp = k;
				if ((points[i][0] - points[j][0])*(points[i][0] - points[j][0]) + (points[i][1] - points[j][1])*(points[i][1] - points[j][1])
					== (points[i][0] - points[k][0])*(points[i][0] - points[k][0]) + (points[i][1] - points[k][1])*(points[i][1] - points[k][1]))
					count++;
			}
		}
	}
	cout << count << endl;
	return count;
}

int main447B() {

	vector<vector<int>> points = { {0,0},{1,0},{2,0} };
	numberOfBoomerangs(points);

	system("pause");
	return EXIT_SUCCESS;
}