#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


//������������BST�����ص㣺
/*1.�ڵ�N�������ϵ����нڵ��ֵ��С�ڵ��ڽڵ�N��ֵ
  2.�ڵ�N�������ϵ����нڵ��ֵ�����ڵ��ڽڵ�N��ֵ
  3.��������������Ҳ���Ƕ���������*/


struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL)  {}
};

TreeNode* lowestCommenAncestor(TreeNode *root, TreeNode *q, TreeNode *p)
{
	int qval = q->val;
	int pval = p->val;
	TreeNode *node = root;

	while (node != NULL)
	{
		int parentVal = node->val;
		if (pval > parentVal&&qval > parentVal)
			node = node->right;
		else if (pval < parentVal&&qval < parentVal)
			node = node->left;
		else
			return node;
	}
	return NULL;
}

int main235A() {



	system("pause");
	return EXIT_SUCCESS;
}