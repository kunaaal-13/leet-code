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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case 1: If the tree is empty, or we hit a dead end
        if (root == NULL) {
            return false;
        }
        
        // Base case 2: If we are at a leaf node, check if the remaining sum matches
        if (root->left == NULL && root->right == NULL) {
            return targetSum == root->val;
        }
        
        // Recursive step: Subtract current value from the target and check both branches
        int remainingSum = targetSum - root->val;
        
        return hasPathSum(root->left, remainingSum) || 
                                hasPathSum(root->right, remainingSum);
    }
};