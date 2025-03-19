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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        
        while(root!=NULL)
        {
            
            if(root->left==NULL){
                 ans.push_back(root->val);
                 root=root->right;
            }
            else
            {
                TreeNode * InorderSuccessor=root->left;
                while(InorderSuccessor->right!=NULL&&InorderSuccessor->right!=root){
                    InorderSuccessor=InorderSuccessor->right;
                }
                 
                 if(InorderSuccessor->right==NULL){
                   InorderSuccessor->right=root;
                   root=root->left;
                 }
                 else{
                    InorderSuccessor->right=NULL;
                    ans.push_back(root->val);
                    root=root->right;
                 }
            }

        }
return ans;

    }
};