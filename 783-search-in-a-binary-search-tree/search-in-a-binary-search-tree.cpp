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
   
   TreeNode *helper(TreeNode *root,int val){
        if(!root)return NULL;

        if(root->val==val){
           return root;
        }
        //right side
        else if(root->val<val){
          return  helper(root->right,val);
        }
        // left side
        else{
           return helper(root->left,val);
        }
         
   }
  
    TreeNode* searchBST(TreeNode* root, int val) {
      return helper(root,val);
    }
};