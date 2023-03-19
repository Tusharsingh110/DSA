#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(){}
	TreeNode(int data) {
		this->val = data;
		this->left = NULL;
		this->right = NULL;
	}
};
void preorder(TreeNode*root) {
	if(root==nullptr) {return;}

	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(TreeNode*root) {
	if(root==nullptr) {return;}

	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}

void postorder(TreeNode*root) {
	if(root==nullptr) {return;}

	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";
}

int main() {
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	cout<<"Preorder Traversal:\n";
	preorder(root);
	cout<<"\nInorder Traversal:\n";
	inorder(root);
	cout<<"\nPostorder Traversal:\n";
	postorder(root);
}