#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
/*
	size()   目前容器正拥有的元素个数
	capacity() 容器能存储的元素个数，即容量
	reserve()   重新指定容器能存储数据的个数
	resize()   重新指定容器有效的元素个数


	设原来的v.size()是n，当调用v.resize(m)后，有两种情况：
	      1.若m<n,则只保存前m个元素
		  2.若m>n,容器之前存储元素不变，不足补0，如果想补其他元素v.size(m,val)



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