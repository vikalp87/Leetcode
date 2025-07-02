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
    void pathsum(TreeNode* root, int targetSum, vector<int>& ans,
                 vector<vector<int>>& result) {
        if (!root) return;
        targetSum = targetSum - root->val;
        ans.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {
            if (targetSum == 0) {
                result.push_back(ans);
            }
            ans.pop_back();
            return;
        }

        pathsum(root->left, targetSum, ans, result);
        pathsum(root->right, targetSum, ans, result);
        ans.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        vector<vector<int>> result;
        pathsum(root, targetSum, ans, result);
        return result;
    }
};