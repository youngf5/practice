#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<conio.h>
#include<string>
using namespace std;

vector<int> sortArrayByPartity(vector<int> &A)
{
	if (A.empty())
		return A;
	int i = 0;
	int j = 1;
	while (1)
	{
		if (i >= A.size() || j >= A.size())
			break;
		while (i<A.size() && A[i]%2==0)               //Ҫ���ж�i<A.size()���ж�A[i]%2==0,��Ȼ���ڴ����
		{
			i += 2;
		}
			cout << i << endl;
		while (j<A.size()&& A[j] % 2 == 1)
			j += 2;
		cout << j << endl;
		if (i < A.size() && j < A.size())         //�ж��Ƿ���vector��Χ���ٽ��н��������������ڴ����(������������ֱ��ʹ��swap����)
		{                                         //��if�жϿ�����ѭ����ʼʱ���ж���� if��else�ж�
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	for (int k = 0; k < A.size(); k++)
		cout << A[k] << " ";
	return A;
}
int main922B() {

	vector<int>A = { 4,2,5,7,5,6,7,8 };
	sortArrayByPartity(A);
	system("pause");
	return EXIT_SUCCESS;
}