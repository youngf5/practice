#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
#include<map>	
using namespace std;

vector<int> ralativeSortArrayII(vector<int> &arr1, vector<int> &arr2)
{
	vector<int> temp;
	vector<int>::iterator iter;                    //定义迭代器     vector<int>::iterator iter;
	map<int, int> Map;                             //定义map       map<int,int>Map;
	for (int i = 0; i < arr1.size(); ++i)           //map中first调用关键字，second调用值；
	{
		Map[arr1[i]]++;
	}
	for (int j = 0; j < arr2.size(); ++j)
	{
		auto iter = Map.find(arr2[j]);
		if (iter != Map.end()) {
			int count = iter->second;
			while (count--)
			{
				temp.push_back(iter->first);
			}
			Map.erase(iter);                    //map中earse函数删除是返回下一个迭代器还是什么？  （map是关联式容器，调用earse后当前迭代器失效）
		}
	}
	auto Map_it = Map.begin();
	while (Map_it != Map.end())
	{
		while (Map_it->second--)
		{
			temp.push_back(Map_it->first);
		}
		Map_it++;
	}
	for (int i = 0; i < temp.size(); ++i)
		cout << temp[i] << endl;
	return temp;
}

int main1122A2() {

	vector<int> arr1 = { 2,3,1,3,2,4,6,7,9,2,19 };
	vector<int> arr2 = { 2,1,4,3,9,6 };

	ralativeSortArrayII(arr1, arr2);

	system("pause");
	return EXIT_SUCCESS;
}