#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL) {}
};

int search(TreeNode *root, int sum)
{
	if (root == NULL)
		return sum;
	int right_val = search(root->right, sum);
	root->val += right_val;
	int left_val = search(root->left, root->val);
	return left_val;
}

TreeNode *convertBST(TreeNode *root)
{
	search(root, 0);
	return root;
}

int main538B() {



	system("pause");
	return EXIT_SUCCESS;
}