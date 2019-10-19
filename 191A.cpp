#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int hammingWeightI(uint32_t n)
{
	bitset<32> b(n);
	cout << b.count() << endl;
	return b.count();
}

int main191A() {
	uint32_t n = 101;
	hammingWeightI(n);


	system("pause");
	return EXIT_SUCCESS;
}