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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

          ListNode *temp=headA;
          ListNode *ptr2=headB;
          unordered_set<ListNode *>set;
          while(temp!=NULL){
            set.insert(temp);
            temp=temp->next;
          }

          while(ptr2!=NULL){
          
          if(set.find(ptr2)!=set.end()){
            return ptr2;
          }

            ptr2=ptr2->next;
          }
return NULL;

    }
};