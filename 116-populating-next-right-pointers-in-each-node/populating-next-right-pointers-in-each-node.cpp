/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // if (!root) {
        //     return root;
        // }

        // queue<Node*> q;
        // q.push(root);

        // while (!q.empty()) {
        //     int n = q.size();
        //     Node * linkAddress = q.front();

        //     for (int i = 0; i < n; i++) {
        //         Node* node = q.front();
               
        //        if(linkAddress!=node)
        //             node->next = linkAddress;
                
               

        //         if (node->right != NULL) {
        //             q.push(node->right);
        //         }
        //         if (node->right != NULL) {
        //             q.push(node->left);
        //         }
        //          linkAddress = node;
        //          q.pop();
        //     }
        // }
        // return root;

        if(!root){
            return root;
        }
        if(root->left!=NULL&&root->right!=NULL){
            root->left->next=root->right;
            if(root->next!=NULL)
            root->right->next=root->next->left;
        }
        connect(root->left);
        connect (root->right);
        return root;



    }
};