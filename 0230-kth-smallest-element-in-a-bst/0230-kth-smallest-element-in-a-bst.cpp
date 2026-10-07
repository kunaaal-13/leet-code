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
    int preOrder=0;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return -1;
        if(root->left){
           int la= kthSmallest(root->left,k);
           if(la!=-1){
            return la;
           }
        }
        if(preOrder+1==k){
            return root->val;
        }
        preOrder++;
        if(root->right){
           int ra= kthSmallest(root->right,k);
           if(ra!=-1){
            return ra;
           }
        }
        return -1;

    }
};