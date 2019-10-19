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
	//  树的层序遍历
	vector<double> output;
	queue<TreeNode *> tree;              //定义队列，类型为自定义类型   TreeNode *
	tree.push(root);

	if (tree.empty())
		return output;
	while (!tree.empty())
	{
		double sum = 0;
		int size = tree.size();                //*****求队列的大小 size
		for (int i = 0; i < size; ++i)             //*******通过for循环将同层的数据遍历*********
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