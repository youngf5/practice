#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<vector>
#include<conio.h>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

class Solution
{
public:
	vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
	{
		multimap<int,vector<int>> distance;
		vector<vector<int>> ans;
		for (int i = 0; i < size(points); ++i)
		{
			int dis = points[i][0] * points[i][0] + points[i][1] * points[i][1];
			distance.insert(make_pair(dis, points[i]));
		}

		multimap<int,vector<int>>::iterator it = distance.begin();
		//for (; it != distance.end(); ++it)
		//{
		//	cout << it->first << endl;
		//}
		for (int i = 0; i < K; ++i,it++)
		{
			vector<int> temp;
			temp.push_back(it->second[0]);
			temp.push_back(it->second[1]);
			ans.push_back(temp);
			cout << it->second[0] << " " << it->second[1] << endl;
		}
		return ans;
	}

};

int main973B() {

	vector<vector<int>> points = { {1,3}, {-2,2} };
	int K = 1;
	Solution s;
	s.kClosest(points, K);

	system("pause");
	return EXIT_SUCCESS;
}