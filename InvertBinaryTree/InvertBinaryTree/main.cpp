#include <iostream>

using namespace std;
class TreeNode;
class Solution;
class TreeNode {
public: int val;
public: TreeNode *left;
		TreeNode *right;
public: TreeNode(int val)
{

	this->val = val;
	this->left = NULL;
	this->right = NULL;

}

};

class Solution 
{
	/**
	* @param root: a TreeNode, the root of the binary tree
	* @return: nothing
	*/
public:
	void invertBinaryTree(TreeNode *root) {
		if (root == NULL) {
			return;
		}
		TreeNode * temp = root->left;
		root->left = root->right;
		root->right = temp;

		invertBinaryTree(root->left);
		invertBinaryTree(root->right);
	}
};
void main()

{
	TreeNode * Tree=new TreeNode(5);
	TreeNode * TreeLeft = new TreeNode(3);
	TreeNode * TreeRight = new TreeNode(8);
	Tree->left = TreeLeft;
	Tree->right = TreeRight; 
	Solution So;
	So.invertBinaryTree(Tree);
	int left = Tree->left->val;
	int right = Tree->right->val;
	delete Tree, TreeLeft, TreeRight;

}
