#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
/*
	size()   Ŀǰ������ӵ�е�Ԫ�ظ���
	capacity() �����ܴ洢��Ԫ�ظ�����������
	reserve()   ����ָ�������ܴ洢���ݵĸ���
	resize()   ����ָ��������Ч��Ԫ�ظ���


	��ԭ����v.size()��n��������v.resize(m)�������������
	      1.��m<n,��ֻ����ǰm��Ԫ��
		  2.��m>n,����֮ǰ�洢Ԫ�ز��䣬���㲹0������벹����Ԫ��v.size(m,val)



*/
string removeDuplicatesI(string S)
{
	int len = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if (len == 0 || S[len - 1] != S[i])
		{
			S[len] = S[i];
			len++;
		}
		else
			len--;
	}
	S.resize(len);                          
	cout << S << endl;
	return S;
}

int main1147A1() {

	string S = "abbaca";
	removeDuplicatesI(S);

	system("pause");
	return EXIT_SUCCESS;
}