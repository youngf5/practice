#define _CRT_SECURE_NO_WARNINGS
#include<iostream>>
#include<conio.h>
#include<string>
using namespace std;


int countPrimeSetBits(int L, int R)
{
	if (L > R)
	{
		cout << "input the wrong data!" << endl;
		return -1;
	}
	int cou = 0;
	for (int i = L; i <= R; ++i)
	{
		int k = i;
		int count = 0;
		while (k)
		{
			if (k % 2 == 1)
			{
				count++;
				k = k / 2;
			}
			else k = k / 2;
		}
		for (int j = 1; j <= count; ++j)
		{
			if (j != 1)
			{
				if (count % j == 0&&j!=count)
					break;
				if (j == count && count%j==0)
					cou++;
			}
		}
	}
	cout << cou << endl;
	return cou;
}
int main762B() {

	int l = 10;
	int r = 15;
	countPrimeSetBits(l, r);

	system("pause");
	return EXIT_SUCCESS;
}