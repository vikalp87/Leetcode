/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    TreeNode* deseralizeBST(int &index, vector<string>& preorder, long long mini,
                            long long maxi) {
           if(index+1>preorder.size()){
            return NULL;
           }

        if (!(mini < stoi(preorder[index]) && maxi > stoi(preorder[index]))) {
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(preorder[index]));
        index++;
        root->left = deseralizeBST(index, preorder, mini, root->val);
        root->right = deseralizeBST(index, preorder, root->val, maxi);
        return root;
    }

    void helper(TreeNode* root, string& ans) {
        if (!root) {
            return;
        }

        ans += to_string(root->val) + ",";
        helper(root->left, ans);
        helper(root->right, ans);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans;
        helper(root, ans);
       
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        stringstream ss(data);
        string token;
        vector<string> preorder;
        int index = 0;
        while (getline(ss, token, ',')) {
            if (!token.empty()) {
                preorder.push_back(token);
            }
        }
         
        long long mini = -1e18, maxi = 1e18;

        return deseralizeBST(index, preorder, mini, maxi);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;