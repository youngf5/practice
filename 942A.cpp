#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;

vector<int>DiStringMatch(string s)
{
	int max = s.length(),min=0;
	vector<int>A;
	for (char c:s)
	{
		if ( c == 'I') {
			A.push_back(min++);     //vector �����Ĳ��뺯��push_back(x),��x���뵽������ĩβ 
		}  
		else {
			A.push_back(max--);
		}   
	}
	A.push_back((max + max) / 2);    //����  A.push_back((min+min)/2);
	for (int i = 0; i < A.size(); i++)   
		cout << A[i] << endl;
	return A;
}
int main942A() {
	string s = "IDID";
	DiStringMatch(s);


	system("pause");
	return EXIT_SUCCESS;
}