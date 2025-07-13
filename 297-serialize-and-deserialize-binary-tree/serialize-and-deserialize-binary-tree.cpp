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
    TreeNode* deseralizeBinaryTree(int &index, vector<string> &ans) {
        
        if (ans[index] == "#" || index+1>=ans.size()) {
            index++;
            return NULL;    
        } 
        
        TreeNode* root = new TreeNode(stoi(ans[index]));
        index++;
        root->left=deseralizeBinaryTree(index,ans);
        root->right=deseralizeBinaryTree(index,ans);
        return root;
    }

    void helper(TreeNode* root, string& ans) {
        if (!root) {
          ans+="#,";
            return;
        }
        ans+=to_string(root->val)+",";
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
        int index=0;
    stringstream ss(data);
    string token;
    vector<string> tokens;

    while (getline(ss, token, ',')) {
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }
    
    TreeNode *root= deseralizeBinaryTree(index,tokens); 
     return root;
      

    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));