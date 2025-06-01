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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
     ListNode *temp=head;
     ListNode*current=head;
     ListNode *prev=NULL;
     while(current!=NULL){
        current=current->next;
        temp->next=prev;
        prev=temp;
        temp=current;
     }

     head=prev;
     return head;
    
    }

};