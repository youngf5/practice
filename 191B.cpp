#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
                                              //����д�������⣬
int hanmmingWeight(uint32_t n)               //��λ���㣬�������㣬����Ǹ�������λ�Ჹ1������������λΪ1�����Ƽ���ò�����Ҫ�Ľ����
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