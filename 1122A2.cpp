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
	vector<int>::iterator iter;                    //���������     vector<int>::iterator iter;
	map<int, int> Map;                             //����map       map<int,int>Map;
	for (int i = 0; i < arr1.size(); ++i)           //map��first���ùؼ��֣�second����ֵ��
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
			Map.erase(iter);                    //map��earse����ɾ���Ƿ�����һ������������ʲô��  ��map�ǹ���ʽ����������earse��ǰ������ʧЧ��
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