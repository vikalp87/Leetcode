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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        int row = 1;
        if (!root)
            return ans;

        map<int, map<int, multiset<int>>> m;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
         
        while (!q.empty()) {
            int size = q.size();
             cout<<size<<endl;
            for (int i = 0; i < size; i++) {
                auto [node, verticalHeight] = q.front();

                m[verticalHeight][row].insert(node->val);

                if (node->left != NULL) {
                    q.push({node->left, verticalHeight - 1});
                }
                if (node->right != NULL) {
                    q.push({node->right, verticalHeight + 1});
                }
                q.pop();
               
            }
             row++;
        }

        for (auto i : m) {
            
            vector<int> result;
            for (auto j : i.second) {

                for (auto p : j.second) {
                    result.push_back(p);
                }
            }
            ans.push_back(result);
        }

        return ans;
    }
};