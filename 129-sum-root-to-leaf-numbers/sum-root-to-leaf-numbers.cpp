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
    void sum(TreeNode* root, int& totalSum, int& stageSum) {

        if (root == NULL) {
            return;
        }
         stageSum =stageSum * 10 + root->val;
        if (root->left == NULL && root->right == NULL) {
            totalSum += stageSum;
         }
        sum(root->left, totalSum, stageSum);
        sum(root->right, totalSum, stageSum);
        stageSum =((stageSum - root->val) / 10);
       
    }
    int sumNumbers(TreeNode* root) {
        int totalSum = 0, stageSum = 0;
        sum(root, totalSum, stageSum);
        return totalSum;
    }
};