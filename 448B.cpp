#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//******超出时间限制***********时间复杂度太高
vector<int>findDisappearedNumbers(vector<int> &nums)
{
	vector<int>ans;
	sort(nums.begin(), nums.end());
	for (int i = 1; i <= nums.size(); ++i)         //1 2 2 3 3 4 7 8
	{
		if (find(nums.begin(), nums.end(), i)==nums.end())           //vector中没有find函数，所以要使用泛型find，调用find函数增加时间复杂度
		{
			ans.push_back(i);
		}
	}
	//for (int i = 0; i < ans.size(); ++i)
	//	cout << ans[i] << endl;
	return ans;
}

int main448B() {

	vector<int> nums = { 4,3,2,7,8,2,3,1 };    
	findDisappearedNumbers(nums);

	system("pause");
	return EXIT_SUCCESS;
}