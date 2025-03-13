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
    vector<int> rightSideView(TreeNode* root) {
         queue<TreeNode*> q;
        vector<int>result;
        q.push(root);
        if (root == NULL) {
            return result;
        }
        while (!q.empty()) {

            int n = q.size();
            vector<int> ans;

            for (int i = 0; i < n; i++) {
                TreeNode* printNode = q.front();
                ans.push_back(printNode->val);
                if (printNode->left != NULL) {
                    q.push(printNode->left);
                }
                if (printNode->right != NULL) {
                    q.push(printNode->right);
                }
                q.pop();
            }
            result.push_back(ans.back());
        }

        return result;
    }
};