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
			A.push_back(min++);     //vector 容器的插入函数push_back(x),将x插入到容器的末尾 
		}  
		else {
			A.push_back(max--);
		}   
	}
	A.push_back((max + max) / 2);    //或者  A.push_back((min+min)/2);
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