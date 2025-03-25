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
    TreeNode * constructTree(int l, int r, bool leftCall, bool rightCall, TreeNode* prev,vector<int>nums) {

        if (l > r)
            return NULL;

        pair<int, int> p = maximumValue(nums,l,r);
        TreeNode* root = new TreeNode(p.first);
        
         if (prev != NULL) {
            if (leftCall) {
                prev->left = root;
            } else {
                prev->right = root;
            }
        }
        constructTree(l, p.second - 1, true, false,root,nums);
        constructTree(p.second + 1, r, false, true,root,nums);
        return root;
    }

    pair<int,int> maximumValue(vector<int>nums,int l,int r){
        int maxi=INT_MIN;
        pair<int,int>p;
        int index=-1;
         for(int i=l;i<=r;i++){
              if(maxi<nums[i]){
                maxi=nums[i];
                index=i;
                
              }
         }
         p.first=maxi;
         p.second=index;
         return p;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        int l = 0, r = nums.size() - 1;
       return constructTree(l, r, false, false, NULL,nums);

    }
};