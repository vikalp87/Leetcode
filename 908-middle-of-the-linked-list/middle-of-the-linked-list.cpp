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
    ListNode* middleNode(ListNode* head) {
     ListNode *fast=head;
     ListNode *slow=head;
    //  int count=0;
    //  while(temp!=NULL){
    //     temp=temp->next;
    //     count++;
    //  }

    //  int middleElement=(count/2);
    //  temp=head;
    //  while(middleElement--){
    //    temp=temp->next;
    // }
    // return temp;
    // }

    while(fast!=NULL && fast->next!=NULL ){

        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;

    }


};