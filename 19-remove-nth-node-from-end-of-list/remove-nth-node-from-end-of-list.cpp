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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *fast=head;
    ListNode *slow=head;
    for(int i=0;i<n;i++){
        if(fast!=NULL)
        fast=fast->next;
    }

/* if the below condtion is true means fast reaches the end node and slow reaches the node to be deleted
 but if this condition is false it means fast is already viloating means slow is always present on first position so we have to delete that node and update head also

*/

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
      
    }
    
    // means first node is deleted so we have to update head;
    if(fast==NULL){
        head=slow->next;
    }
    else{
 slow->next=slow->next->next;
    }
  
   
   
    return head;
     
    }
    
};