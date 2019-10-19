#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


int bitwiseComplementA(int N)
{
	if (!N)
		return 1;
	int num = 1;
	while (num <= N)
		num <<= 1;
	cout << num - 1 - N << endl;
	return num - 1 - N;
}
int main1009A() {

	int N = 5;
	bitwiseComplementA(N);

	system("pause");
	return EXIT_SUCCESS;
}