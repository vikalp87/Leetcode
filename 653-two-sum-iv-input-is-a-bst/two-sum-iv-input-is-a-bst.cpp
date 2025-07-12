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

   bool helper(TreeNode *root, int k, unordered_map<int,int>&m){

        if(!root){
         return false;
        }
        if(m.find(k-root->val)!=m.end()){
            return true;
        } 
        m[root->val]++;
        bool lh=helper(root->left,k,m);
        bool rh=helper(root->right,k,m);
          
         return lh||rh; 

   }

    bool findTarget(TreeNode* root, int k) {
            unordered_map<int,int>m;
            return helper(root,k,m);      
    }
};