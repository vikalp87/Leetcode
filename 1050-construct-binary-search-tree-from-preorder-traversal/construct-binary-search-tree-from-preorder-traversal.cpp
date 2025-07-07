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
    TreeNode* helper(vector<int>& preorder, int& index, int max, int min) {
        if(index>=preorder.size())return NULL;
        
        int val = preorder[index];

        if (val > max || val < min) {
            return NULL;
        }
        TreeNode* newNode = new TreeNode(val);
        index++;
        newNode->left = helper(preorder, index, val, min);
        newNode->right = helper(preorder, index, max, val);

        return newNode;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {

        int index = 0;
        int maxi = INT_MAX, mini = INT_MIN;
        return helper(preorder, index, maxi, mini);
    }
};