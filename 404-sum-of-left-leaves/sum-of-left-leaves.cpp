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
    void sum1(TreeNode *root,bool leftcall,bool rightcall,int &sum){
        if(!root)return ;
        
        if(root->left==NULL&&root->right==NULL){
             if(leftcall)sum+=root->val;
        }
        sum1(root->left,true,false,sum);
        sum1(root->right,false,true,sum);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum=0;
        sum1(root,false,false,sum);
        return sum;
    }
};