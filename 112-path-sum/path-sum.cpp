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
      bool pathsum(TreeNode *root,int targetSum){
          if(!root)return false;
          targetSum=targetSum-root->val; 
          if(root->left==NULL && root->right==NULL && targetSum==0){
            
              targetSum+=root->val;
                return true;
          }

            bool isLeft=pathsum(root->left,targetSum);
            bool isRight=pathsum(root->right,targetSum);

            targetSum+=root->val;
            return isLeft || isRight;
            
      }
    bool hasPathSum(TreeNode* root, int targetSum) {
      return pathsum(root,targetSum);
    }
};