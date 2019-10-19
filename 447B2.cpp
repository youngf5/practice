#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
//超出时间限制***************时间复杂度过高,有错误。。。。。。。。。。。
int numberOfBoomerangsB2(vector<vector<int>> &points)
{
	int count = 0;
	if (points.size() < 3)
		return count;
	multimap<map<int,int>, int> m;
	int num = points.size();
	for (int i = 0; i < num; ++i)
	{
		for (int j = i + 1; j < num; ++j)
		{
			map<int, int>m1;
			m1.insert(make_pair(i, j));
			int dis = (points[i][0] - points[j][0])*(points[i][0] - points[j][0]) + (points[i][1] - points[j][1])*(points[i][1] - points[j][1]);
			m.insert(make_pair(m1, dis));
		}
	}

	//for (multimap<map<int, int>, int>::iterator it = m.begin(); it != m.end(); ++it)
	//{
	//	cout << it->second << endl;
	//}

	for (multimap<map<int, int>, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		for (multimap<map<int, int>, int>::iterator it1 = it++ ; it1 != m.end(); ++it1)
		{
			//cout << it->second << "|" << it1->second << "|" << (it->first.begin())->first << "|" << (it1->first.begin())->first << endl;
			if (it->second == it1->second&&((it->first.begin())->first==(it1->first.begin())->first|| (it->first.begin())->first==(it->first.begin())->second
				|| (it->first.begin())->second == (it1->first.begin())->first|| (it->first.begin())->second == (it1->first.begin())->second))
			{
				count += 2;
			}
		}
	}


	cout << count << endl;
	return count;
}

int main447B2() {

	vector<vector<int>> points = { { 0,0 },{ 1,0 },{ 2,0 } };          //[[0,0],[1,0],[-1,0],[0,1],[0,-1]]
	numberOfBoomerangsB2(points);

	system("pause");
	return EXIT_SUCCESS;
}