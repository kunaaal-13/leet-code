/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
    if(root==NULL) return 0;
    int hL=height(root->left);
    int hR=height(root->right);
    return max(hL,hR)+1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int leftD=diameterOfBinaryTree(root->left);
        int rightD=diameterOfBinaryTree(root->right);
        int currD=height(root->left)+height(root->right);
        return max(leftD,max(rightD,currD));

    }
};