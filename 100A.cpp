#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x),left(NULL),right(NULL) {}
};

bool isSameTree(TreeNode *p, TreeNode *q)
{
	if (p == NULL&&q == NULL)
		return true;
	if (p != NULL&&q != NULL&&p->val == q->val)
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);   //递归，**************并且利用了短路特性**************
	else return false;
}

int main100A() {



	system("pause");
	return EXIT_SUCCESS;
}