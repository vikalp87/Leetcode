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
   
   ListNode *mergeTwoLinkkedList(ListNode *headA,ListNode *headB){
            
            if(!headA){
                return headB;
            }
            if(!headB){
                return headA;
            }
      
         ListNode *dummy=new ListNode(-1);
         ListNode *temp=dummy;

         while(headA!=NULL && headB!=NULL){

            if(headA->val<=headB->val){
                temp->next=headA;
                headA=headA->next;
            }
            else{    
                temp->next=headB;
                headB=headB->next;
            }
            temp=temp->next;

         }
         temp->next=(headA==NULL? headB:headA);
         return dummy->next;

   }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }

      ListNode *first=NULL;
      ListNode *second=NULL;
      for(int i=0;i<lists.size();i++){
     
           first=lists[i];
           second= mergeTwoLinkkedList(first,second);

       } 
       
        return second;

    }
};