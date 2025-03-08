/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   bool lowestCommon(TreeNode *root,TreeNode *p,vector<TreeNode *>&vec1){
            if(!root){
                return false;
            }

             vec1.push_back(root);
             if(root->val==p->val){
                return true;
             }
            bool lh=lowestCommon(root->left,p,vec1);
            bool rh=lowestCommon(root->right,p,vec1);
            if(!(lh||rh)){
                vec1.pop_back();
            }
            return lh||rh;
   }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode *>vec1;
        vector<TreeNode *>vec2;
        TreeNode *result=NULL;
        lowestCommon(root,p,vec1);
        lowestCommon(root,q,vec2);
       
        int minsize= min(vec1.size(),vec2.size());
        for(int i=0;i<minsize;i++){
            if(vec1[i]->val!=vec2[i]->val){
                break;
            }
            result=vec1[i];
        }
      return result;
    }
};