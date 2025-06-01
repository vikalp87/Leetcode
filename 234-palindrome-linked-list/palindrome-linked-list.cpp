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
    
    ListNode * reverseNode(ListNode *temp){
       
       ListNode *previous=NULL;
       ListNode *current=temp;
       while(current!=NULL){
        current=temp->next;
        temp->next=previous;
        previous=temp;
        temp=current;
       }
       return previous;


    }
 
    bool isPalindrome(ListNode* head) {

        ListNode* fast = head;
        ListNode* slow = head;

        if(head->next==NULL){
            return true;
        }
        
      while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
         
        }

        ListNode *secondHalf=reverseNode(slow);
        slow=head;

        while(secondHalf!=NULL){

            if(slow->val!=secondHalf->val){
                return false;
            }
            slow=slow->next;
            secondHalf=secondHalf->next;
        }

        return true;


      
    }
};