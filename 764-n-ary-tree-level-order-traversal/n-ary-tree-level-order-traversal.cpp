/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {};

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         vector<vector<int>> result;
        if(!root){
            return result;
        }
       
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            vector<int> ans;
            int size = q.size();
            for (int i = 0; i < size; i++) {
                Node* node = q.front();
                vector<Node*> vector = node->children;
                int n=vector.size();

                for (int i = 0; i <n; i++) {
                    if (vector[i] != NULL)
                        q.push(vector[i]);
                }

                q.pop();
                ans.push_back(node->val);
            }
            result.push_back(ans);
        }
       
       
       
        return result;
    }
};