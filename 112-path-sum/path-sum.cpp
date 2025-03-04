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
    bool pathSum(TreeNode* root, int targetSum, int& sum) {

        if (root == NULL) {
            return false;;
        }
        sum += root->val;
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum) {
                sum = sum - root->val;
                return true;
            } else {
                sum = sum - root->val;
                return false;
            }
        }
        bool a = pathSum(root->left, targetSum, sum);
        bool b = pathSum(root->right, targetSum, sum);
        sum = sum - root->val;
        return a||b;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return pathSum(root, targetSum, sum);
    }
};