#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
using namespace std;



double area(vector<int> a, vector<int> b, vector<int> c)
{
	double s = (a[0]*b[1]-a[0]*c[1]+b[0]*c[1]-b[0]*a[1]+c[0]*a[1]-b[0]*b[1]);                                   //S=(x1y2-x1y3+x2y3-x2y1+x3y1-x2y2)
	return s;
}

double largestTriangleArea(vector<vector<int>> &points)
{
	double s=0;
	for (int i = 0; i < points.size(); i++)
	{
		for (int j = i + 1; j < points.size(); ++j)
		{
			for (int k = j + 1; k < points.size(); ++k)
			{
				s=s>area(points[i], points[j], points[k])?s: area(points[i], points[j], points[k]);
			}
		}
	}
	cout << s << endl;
	return s;
}

int main812B() {

	vector<vector<int>>points = { {0,0},{0,1},{1,0},{0,2},{2,0} };
	largestTriangleArea(points);

	system("pause");
	return EXIT_SUCCESS;
}