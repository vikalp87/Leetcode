/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        bool isComplete = true;
        int level=0;
        
        while (!q.empty()) {
            int size = q.size();
            int nmin = q.front().second;
            int noOfNodes=pow(2,level);
            int presentNodes=0;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front().first;
                
               if(level!=0){

                if ((i + 1 != q.front().second)) {
                    return false;
                }
               }

                int current = q.front().second - nmin;

                if (node->left != NULL) {
                    q.push({node->left, 2LL * current + 1});
                }
                if (node->right != NULL) {
                    q.push({node->right, 2LL * current + 2});
                }
               presentNodes++;
                q.pop();

            }
            if((presentNodes!=noOfNodes)&&!q.empty()){
                return false;
            }
            level++;
        }

        return true;
    }
};