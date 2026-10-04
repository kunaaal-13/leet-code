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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,long long int >> q;
        q.push({root,0});
        long long int maxW=0;
        while(!q.empty()){
            int curLevelSize=q.size();
            long long int stIdx=q.front().second;
            long long int endIdx=q.back().second;
            maxW =max(maxW,(endIdx-stIdx+1));
            for(int i=0;i<curLevelSize;i++){
                auto cur=q.front();
                q.pop();
                long long curIdx= cur.second - stIdx;
                if(cur.first->left){
                    q.push({cur.first->left,curIdx*2+1});
                }
                if(cur.first->right){
                    q.push({cur.first->right,curIdx*2+2});
                }
            }
        }
        return maxW;
    }
};