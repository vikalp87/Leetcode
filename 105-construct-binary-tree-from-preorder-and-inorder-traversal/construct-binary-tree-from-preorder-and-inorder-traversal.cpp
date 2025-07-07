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
    int findLeftAndRightPart(int key, vector<int>& inorder, int i, int j) {
        for (int k = i; k <= j; k++) {

            if (inorder[k] == key) {
                return k;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& index,
                     int i, int j) {

        if (i > j)
            return NULL;

        TreeNode* newNode = new TreeNode(preorder[index]);

        int indexValue = findLeftAndRightPart(preorder[index], inorder, i, j);
        index++;
        newNode->left = helper(preorder, inorder, index, i, indexValue - 1);
        newNode->right = helper(preorder, inorder, index, indexValue + 1, j);
        return newNode;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i = 0, j = inorder.size() - 1;
        int index = 0;
        return helper(preorder, inorder, index, i, j);
    }
};