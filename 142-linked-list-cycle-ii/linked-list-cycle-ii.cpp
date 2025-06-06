/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
  ListNode *fast=head;
 ListNode *slow=head;
if(head==NULL){
    return NULL;
}
 while(fast!=NULL && fast->next!=NULL){
       fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            slow=head;
            break;
        }
    }

    if(fast==NULL || fast->next==NULL){
        return NULL;
    }

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    
    return slow;


    }
};