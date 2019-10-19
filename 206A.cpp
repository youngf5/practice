//单向链表的反转
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
#include<conio.h>
#include<string>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

ListNode *reverseList(ListNode *head)
{
	if (head->next = NULL)    //head头指针不能判断是否为NULL？
	{
		return head;
	}
	ListNode *p = head;
	ListNode *k = p->next;
	head->next = NULL;
	while (k)
	{
		ListNode *temp = k->next;
		k->next = p;
		p = k;
		k = temp;
	}
	head = p;
	return head;
}
int main206A() {



	system("pause");
	return EXIT_SUCCESS;
}