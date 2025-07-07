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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& index,
                     int i, int j, unordered_map<int, int>& m) {

        if (i > j)
            return NULL;

        TreeNode* newNode = new TreeNode(preorder[index]);

        int indexValue = m[preorder[index++]];

        newNode->left = helper(preorder, inorder, index, i, indexValue - 1, m);
        newNode->right = helper(preorder, inorder, index, indexValue + 1, j, m);
        return newNode;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i = 0, j = inorder.size() - 1;
        int index = 0;

        unordered_map<int, int> inorderMap;

        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }

        return helper(preorder, inorder, index, i, j, inorderMap);
    }
};