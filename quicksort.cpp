#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>	
using namespace std;
vector<int>quicksort(int left,int right)
{
	int i, j, t, temp;
	int i = left;
	int j = right;
	temp = a[left];
	while (i != j)
	{
		while (a[j] > temp&&i < j)
			j--;
		while (a[i] < temp&&i < j)
			i++;
		if (i < j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);
	quicksort(i + 1, right);
}
int main() {



	system("pause");
	return EXIT_SUCCESS;
}
#endif