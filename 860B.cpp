#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<vector>
#include<string>
using namespace std;

bool lemonadeChange(vector<int> &bills)
{
	if (bills[0] == 10 || bills[0] == 20)
		return false;
	int num5 = 1;
	int num10 = 0;
	for (int i = 1; i < bills.size(); ++i)
	{
		switch (bills[i])
		{
		case 5:
			num5++;
			break;
		case 10:
			num10++;
			if (num5 != 0)
			{
				num5--;
			}
			else
				return false;
			break;
		case 20:
			if (num5 >= 1 && num10 >= 1)
			{
				num5--;
				num10--;
			}
			else if (num5 >= 3)
			{
				num5 -= 3;
			}
			else
				return false;
			break;
		}

	}
	return true;
}

int main860B(int argc, char *argv[])
{
	vector<int> bills = { 5,5,10,10,20 };
	bool ret = lemonadeChange(bills);
	cout << ret << endl;
	system("pause");
	return 0;
}
