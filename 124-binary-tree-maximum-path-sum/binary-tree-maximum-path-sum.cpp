/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int& maxSum) {
        if (!root)
            return 0;
        int lh = pathSum(root->left, maxSum);
        int rh = pathSum(root->right, maxSum);

        maxSum = max(maxSum, lh + rh + root->val);
        return (root->val + max(lh, rh)<0)?0:root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int sum = 0;
        int maxSum = INT_MIN;
        pathSum(root, maxSum);
        return maxSum;
    }
};