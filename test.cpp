#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main() {

	int *p;
	int arr[10] = { 1, 3, 4 };
	p = arr;//ָ��ָ��ջ������

	p = (int*)malloc(10 * sizeof(int));//ָ��ָ�����������
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
	p = NULL;//��ֹҰָ��


	system("pause");
	return EXIT_SUCCESS;
}