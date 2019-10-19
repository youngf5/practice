#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<list>
#include<string>
using namespace std;

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x),next(NULL) {}
};

ListNode *reverseListI(ListNode *head)
{
	if (head==NULL||head->next == NULL)   //head==NULL 判断此链表是不是为空
		return NULL;
	ListNode *new_list = reverseListI(head->next);
	head->next->next = head;
	head->next = NULL;
	return new_list;
}

int main206() {



	system("pause");
	return EXIT_SUCCESS;
}