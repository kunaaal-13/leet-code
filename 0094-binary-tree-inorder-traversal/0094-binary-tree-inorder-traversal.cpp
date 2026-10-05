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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* cur=root;
        while(cur!=NULL){
            if(cur->left==NULL){
                ans.push_back(cur->val);
                cur=cur->right;
            }else{
                TreeNode* IP=cur->left;
                while(IP->right!=NULL && IP->right!=cur){
                    IP=IP->right;
                }
                if(IP->right==NULL){
                    IP->right=cur;
                    cur=cur->left;
                }else{
                    IP->right=NULL;
                    ans.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }
        return ans;
    }
};