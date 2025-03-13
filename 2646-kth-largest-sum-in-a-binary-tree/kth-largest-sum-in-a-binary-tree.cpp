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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
          priority_queue<long, vector<long>, greater<long>> pq;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
              int n = q.size();
              long long  sum=0;
             for (int i = 0; i < n; i++) {
                TreeNode* printNode = q.front();
                  sum+=printNode->val;
                if (printNode->left != NULL) {
                    q.push(printNode->left);
                }
                if (printNode->right != NULL) {
                    q.push(printNode->right);
                }
                q.pop();
            }
            pq.push(sum);
            if(pq.size()>k){
                pq.pop();
            }

     
     }
      if(pq.size()<k){
        return -1;
      }

        return pq.top();
  
    }
};