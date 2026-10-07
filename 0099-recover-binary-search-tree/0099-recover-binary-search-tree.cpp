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
    TreeNode* pre=NULL;
    TreeNode* first=NULL;
    TreeNode* sec=NULL;
    void helper(TreeNode* root){
        if(root==NULL) return;
        helper(root->left);
        if(pre != NULL && pre->val>root->val){
            if(first==NULL){
                first=pre;
            }
            sec=root;
        }
        pre=root;
        helper(root->right);
    }
    void recoverTree(TreeNode* root) {
        helper(root);
        int temp=first->val;
        first->val=sec->val;
        sec->val=temp;
        return;
    }
};