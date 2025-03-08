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
    int isBalancedTree(TreeNode *root,bool &isBalanced){

         if(!root){
           return 0;
         }
        int lh=isBalancedTree(root->left,isBalanced);
        int rh=isBalancedTree(root->right,isBalanced);
        if(abs(lh-rh)>1){
            isBalanced=false;
        }
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        bool isBalanced=true;
        isBalancedTree(root,isBalanced);
        return isBalanced;
    }
};