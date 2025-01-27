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

     ListNode *temp=head;
     int length=0;
     while(temp!=NULL)
     {
        length++;
       
        temp=temp->next;
    }
    int index=length-n+1;
    ListNode *node=head;
    ListNode *prev=NULL;
    bool b=false;
    while(index-1)
    {
        prev=node;
        node=node->next;
        index--;
        b=true;
    }
    if(!b){
     head=node->next;
    }
    else
    {
     prev->next=node->next;
    }
    
     return head;

    }
};