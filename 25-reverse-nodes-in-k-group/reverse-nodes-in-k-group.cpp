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
    pair<ListNode*, ListNode*> reverseList(ListNode* fillNode, int k) {

        ListNode* current = fillNode;
        ListNode* previous = NULL;
        ListNode* temp = fillNode;
        while (current != NULL && k--) {
            current = current->next;
            temp->next = previous;
            previous = temp;
            temp = current;
        }
        return {previous, fillNode};
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* currentNode = head;
        ListNode* fillNode = head;
        ListNode *previousGrpTail=NULL;

        int count = 0;
        if (head == NULL || head->next == NULL || k == 1) {
            return head;
        }

        while (currentNode != NULL) {

            count++;
            currentNode = currentNode->next;

            if (count == k) {
                pair<ListNode*,ListNode *>data=reverseList(fillNode, k);
                fillNode = currentNode;
               
               if(previousGrpTail!=NULL){
                  previousGrpTail->next=data.first;
               }
               else{
                head=data.first;
               }
               
                 previousGrpTail=data.second;
                  count = 0;
            }

           
        }

       if(previousGrpTail!=NULL)
          previousGrpTail->next=fillNode;
       
        return head;
    }
};