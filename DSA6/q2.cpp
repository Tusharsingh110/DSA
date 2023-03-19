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
void levelorder(TreeNode*root) {
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        int n = q.size();

        for(int i=0;i<n;i++) {
            TreeNode*temp = q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left != nullptr) q.push(temp->left);
            if(temp->right != nullptr) q.push(temp->right);
        }
    }
}

int main() {
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	cout<<"Level order Traversal:\n";
    levelorder(root);

}