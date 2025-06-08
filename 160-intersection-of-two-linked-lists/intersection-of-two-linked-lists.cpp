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

      ListNode * distance(ListNode *head,int k){
           ListNode *temp=head;
           for(int i=0;i<k;i++){
            temp=temp->next;
           }
           return temp;
      }

      ListNode *find(ListNode*list1,ListNode *list2){
        while(list1!=list2){
            list1=list1->next;
            list2=list2->next;
        }
        return list1?list1:NULL;

      }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//           ListNode *temp=headA;
//           ListNode *ptr2=headB;
//           unordered_set<ListNode *>set;
//           while(temp!=NULL){
//             set.insert(temp);
//             temp=temp->next;
//           }

//           while(ptr2!=NULL){
          
//           if(set.find(ptr2)!=set.end()){
//             return ptr2;
//           }

//             ptr2=ptr2->next;
//           }
// return NULL;


         ListNode *temp=headA;
          ListNode *ptr2=headB;

          int length1=0,length2=0;
      
          while(temp!=NULL){
           temp=temp->next;
           length1++;
          }

          while(ptr2!=NULL){
             ptr2=ptr2->next;
             length2++;
          }

          
       int difference=abs(length1-length2);
        ListNode *move;
         if(length1>=length2){
            move=distance(headA,difference);
           return find(move,headB);

         }
         else if(length1<length2){
             move=distance(headB,difference);
            return  find(headA,move);
         }

         
return NULL;

    }
};