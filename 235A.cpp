#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


//二叉搜索树（BST）的特点：
/*1.节点N左子树上的所有节点的值都小于等于节点N的值
  2.节点N右子树上的所有节点的值都大于等于节点N的值
  3.左子树和右子树也都是二叉搜索树*/


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