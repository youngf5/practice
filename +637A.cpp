#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x),left(NULL),right(NULL) {}
};

vector<double> averageOfLevels(TreeNode *root) 
{
	//  ���Ĳ������
	vector<double> output;
	queue<TreeNode *> tree;              //������У�����Ϊ�Զ�������   TreeNode *
	tree.push(root);

	if (tree.empty())
		return output;
	while (!tree.empty())
	{
		double sum = 0;
		int size = tree.size();                //*****����еĴ�С size
		for (int i = 0; i < size; ++i)             //*******ͨ��forѭ����ͬ������ݱ���*********
		{
			TreeNode *node = tree.front();
			tree.pop();
			sum += node->val;
			if (node->left != NULL)       
				tree.push(node->left);
			if (node->right != NULL)
				tree.push(node->right);
		}
		output.push_back(sum / size);
	}
	for (int i = 0; i < output.size(); ++i)
		cout << output[i] << endl;
	return output;
}

int main637A() {



	system("pause");
	return EXIT_SUCCESS;
}