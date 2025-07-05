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
    TreeNode* helper(vector<int>& nums, int low, int high) {
        if (low > high)
            return NULL;

        int mid = (low + (high - low) / 2);

        // createNode
        TreeNode* newNode = new TreeNode(nums[mid]);

        TreeNode *leftNodeAddress=helper(nums, low, mid - 1);
        TreeNode *RightNodeAddress= helper(nums, mid + 1, high);

         newNode->left=leftNodeAddress;
         newNode->right= RightNodeAddress;
        
        return newNode;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        return helper(nums, low, high);
    }
};