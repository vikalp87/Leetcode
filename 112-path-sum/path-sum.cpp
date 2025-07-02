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
      bool pathsum(TreeNode *root,int targetSum, int sum){
          if(!root)return false;
          sum+=root->val;  
          if(root->left==NULL && root->right==NULL && sum==targetSum){
              return true;
              sum=sum-root->val;
          }

            bool isLeft=pathsum(root->left,targetSum,sum);
            bool isRight=pathsum(root->right,targetSum,sum);

            sum=sum-root->val;
            return isLeft || isRight;
            
      }
    bool hasPathSum(TreeNode* root, int targetSum) {
      return pathsum(root,targetSum,0);
    }
};