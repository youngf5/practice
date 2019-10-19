#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
                                              //程序写的有问题，
int hanmmingWeight(uint32_t n)               //移位运算，右移运算，如果是负数，高位会补1，所以如果最高位为1，右移计算得不到想要的结果。
{
	int count = 0;
	unsigned int num = 0;
	while (n)
	{
		num = n & 1;
		if (num == 1)
			count++;
		n >>= 1;
	}
	cout << count << endl;
	return count;
}

int main191B() {

	uint32_t  n = 1111101;
	hanmmingWeight(n);

	system("pause");
	return EXIT_SUCCESS;
}