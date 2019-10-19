#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main() {

	int *p;
	int arr[10] = { 1, 3, 4 };
	p = arr;//指针指向栈区数组

	p = (int*)malloc(10 * sizeof(int));//指针指向堆区的数组
									   //p = (int*)malloc(30);
	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 1;
		printf("%d ", p[i]);
	}

	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}

	free(p);
	p = NULL;//防止野指针


	system("pause");
	return EXIT_SUCCESS;
}