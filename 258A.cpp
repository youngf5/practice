#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;


// ����2: �ܽ���ɷ��� ʱ�临�Ӷ�ΪO(1)
// ����λ�� n = 100a + 10b + c �� n - ( a+b+c) = 99a + 9b Ҳ����˵ÿ��n�ĸ�λ��ͽ����ԭn��ȣ�
// ��������9�ı����������Ĳ���9�ı�����������n��9ȡ��Ľ��������������
// nΪ����λ��ʱ��ͬ��ע�� n > 0 �� n % 9 == 0 ʱ�����ӦΪ9

int addDigitsI(int num)
{
	int res = num % 9;
	if (res == 0 && num > 0)
		return 9;
	else
		return res;
}
int main258A() {



	system("pause");
	return EXIT_SUCCESS;
}