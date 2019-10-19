#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main05() {
	int i = 0, j = 0;
	int str[100] = { 0 };
	int str1[100] = { 0 };
	char str2[100] = "(((((()))()()())))()";
	for (i; i < sizeof(str2); i++)
	{
		if (str2[i] == '(');
		{
			str[i] = ++j;
		}
		if (str2[i] == ')')
			str[i] = --j;
	}
	for (i; i < sizeof(str); i++)
		printf("%d ", str[i]);
	printf("\n");
	for (i; i < sizeof(str); i++)
	{
		if (str[i] != 1)
			str1[j] = str2[i];
	}
	printf("%s\n", str1);

	system("pause");
	return EXIT_SUCCESS;
}