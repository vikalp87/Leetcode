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
    int widthOfBinaryTree(TreeNode* root) {
        
        queue<pair<TreeNode *,int>>q;
        q.push({root,0});
        int ans=0;
while(!q.empty())
{
      int size=q.size();
     int nmin=q.front().second;
     int first,last;
     for(int i=0;i<size;i++)
     {
        TreeNode *node=q.front().first;
        int current=q.front().second-nmin;

         if(i==0){
            first=current;
         }
         if(i==size-1){
            last=current;
         }

        if(node->left!=NULL)
        {
            q.push({node->left,2LL*current+1});

        }
        if(node->right!=NULL)
        {
            q.push({node->right,2LL*current+2});
        }
        
        q.pop();
     }
     ans=max(ans,last-first+1);
}
       
       return ans;

    }
};