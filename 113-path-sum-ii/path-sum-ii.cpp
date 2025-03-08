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
    void pathSum(TreeNode* root, int targetSum, vector<int>& tempres,
                 vector<vector<int>>& ans) {
        if (!root) {
            return;
        }

        tempres.push_back(root->val);
        int remainingSum = targetSum - root->val;
        if (root->left == NULL && root->right == NULL) {
            if (remainingSum == 0) {
                ans.push_back(tempres);
             } 
             tempres.pop_back();
                return;
        }
        pathSum(root->left, remainingSum, tempres, ans);
        pathSum(root->right, remainingSum, tempres, ans);
        tempres.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> tempres;
        pathSum(root, targetSum, tempres, ans);
        return ans;
    }
};