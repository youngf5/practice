#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

bool isHappyA(int n)
{
	unordered_set<int>s;
	int sum = 0;
	while (n != 1)
	{
		s.insert(n);
		sum = 0;
		while (n != 0)
		{
			sum += (n % 10)*(n % 10);
			n /= 10;
		}
		n = sum;
		if (s.count(n) != 0)        //*********��n��set�г��ֲ�ֹһ��ʱ����ʾ����ѭ���������ܼ���õ� sum=0�����Է���false��*********
		{
			cout << "false" << endl;
			return false;
		}
	}
	cout << "true" << endl;
	return true;
}

int main202A() {

	int n = 19;
	isHappyA(n);

	system("pause");
	return EXIT_SUCCESS;
}