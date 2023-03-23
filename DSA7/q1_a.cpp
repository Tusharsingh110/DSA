// searching recursive
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int key) {
        if(root == nullptr) return root;
        
        TreeNode* left = searchBST(root->left,key);
        TreeNode* right = searchBST(root->right,key);
        if(root->val == key) {
            return root;
        }
        return left?left:right;
    }
};

//searching iterative

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int key) {
        while(root!=nullptr) {
            if(root->val < key) {
                root = root->right;
            }
            else if(root->val > key) {
                root = root->left;
            }
            else return root;
        }
        return nullptr;
    }
};