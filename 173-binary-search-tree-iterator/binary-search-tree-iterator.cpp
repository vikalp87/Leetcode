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
class BSTIterator {
public:
    stack<TreeNode*> s;
    BSTIterator(TreeNode* root) { pushAll(root); }

    int next() {
        TreeNode* nextElementPtr;
        if (!s.empty()) {
            nextElementPtr = s.top();
             s.pop();
            if (nextElementPtr->right != NULL) {
                pushAll(nextElementPtr->right);
            }
           
        }
        return nextElementPtr->val;
    }

    bool hasNext() {
       
         return !s.empty(); }

    void pushAll(TreeNode* root) {
        while (root) {
            s.push(root);
            root = root->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */