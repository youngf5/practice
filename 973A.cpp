#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include<queue>
#include<string>
using namespace std;

class Solution
{
public:
	struct point {
		int x, y;
		bool operator < (const point &res) const
		{
			return sqrt(x*x + y*y) > sqrt(res.x*res.x + res.y*res.y);
		}
	};

	vector<vector<int>>kClosest(vector<vector<int>>&points, int K)
	{
		priority_queue<point>q;
		for (int i = 0; i < points.size(); i++)
		{
			point p;
			p.x = points[i][0];
			p.y = points[i][1];
			q.push(p);
		}
		vector<vector<int>> res;
		for (int i = 0; i < K; ++i)
		{
			res.push_back(vector<int>());         //******************
			res[i].push_back(q.top().x);
			res[i].push_back(q.top().y);
			q.pop();
		}
		return res;

	}
};

int main973A() {



	system("pause");
	return EXIT_SUCCESS;
}