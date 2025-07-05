/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    pair<ListNode*, ListNode*> middleElement(ListNode* head) {
        if (head->next == NULL)
            return {head, NULL};

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while (fast != NULL && fast->next != NULL) {
             prev = slow;
            slow = slow->next;
            fast = fast->next->next;
           
        }

        prev->next = NULL;
        return {slow, prev};
    }

    TreeNode* helper(ListNode* head) {

        if (!head)
            return NULL;

        auto [middleNode, prev] = middleElement(head);
    
        if (!prev)
            head = NULL;

        TreeNode* newNode = new TreeNode(middleNode->val);
        newNode->left = helper(head);
        newNode->right = helper(middleNode->next);

        return newNode;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        
         return helper(head); 
    }
};