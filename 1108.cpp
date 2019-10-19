#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

string changeIp(string adress)
{
	int s = adress.size();
	for (int i = 0; i < s; i++)
	{
		if (adress[i] == '.')
		{
			adress.insert(i, "[");
			adress.insert(i + 2, "]");
			i = i + 2;
			s = s + 2;
		
		}
	}
	cout << adress << endl;
	return adress;
}
int main01(){
	string p = "1.1.1.1";
	changeIp(p);



	system("pause");
	return EXIT_SUCCESS;
}