#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void test01()
{
	char arr[1024] = {0};
	sscanf("helloworld@itcast.cn", "%[^@]", arr);
	printf("%s\n", arr);
	
}
void test02()
{
	char arr2[1024] = { 0 };
	char arr1[1024] ="helloworld@itcast.cn";
	sscanf("helloworld@itcast.cn", "%[a-z]@%9s", arr1,arr2);
	printf("%s %s\n", arr1,arr2);
}
void test03()
{
	char arr1[1024] = { 0 };
	char arr[1024] = { 0 };
	sscanf("helloworld@itcast.cn", "%10s@%s", arr,arr1);
	printf("%s %s\n", arr,arr1);
}



int mainxx() {
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}