#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<string>
using namespace std;

int fib(int N)
{
	if (N == 1||N==0)
		return N;
	if (N > 1)
		return fib(N - 1) + fib(N - 2);

}
int main509B() {
	int f0 = 0;
	int f1 = 1;
	unsigned int N;
	int s;
	cout << "please input a unsigned number:" << endl;
	cin >> N;
	s = fib(N);
	cout << s << endl;

	system("pause");
	return EXIT_SUCCESS;
}