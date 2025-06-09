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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* linkNode = NULL;
        ListNode* list1current = list1;
        ListNode* list2current = list2;
        ListNode* head = NULL;

      if(!list1)return list2;
      if(!list2)return list1;

      ListNode *dummy=new ListNode(-1);
      ListNode*temp=dummy;
        while (list1 != NULL && list2 != NULL) {


          if(list1->val<=list2->val){

            temp->next=list1;
            list1=list1->next;
               
          }
          else if(list1->val>list2->val){
             temp->next=list2;
             list2=list2->next;

          }
         
             temp=temp->next;
           
        }
        
        temp->next=list1!=NULL?list1 :list2;
       return dummy->next;
      
    }
};