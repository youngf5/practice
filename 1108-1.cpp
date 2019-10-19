#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main02() {
	string address = "1.1.1.1";
	string res;
	size_t last = 0;
	size_t found = address.find('.');
	while (found != string::npos) {
		res += address.substr(last, found - last) + "[.]";
		last = found + 1;
		found = address.find('.', last);
	}
	res += address.substr(last);
	cout << res << endl;



	system("pause");
	return EXIT_SUCCESS;
}