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

        if (list1 == NULL && list2 == NULL) {
            return list1;
        }
        if (list1 == NULL && list2 != NULL) {
            return list2;
        }
        if (list2 == NULL && list1 != NULL) {
            return list1;
        }

        while (list1current != NULL && list2current != NULL) {

            if (list1current->val > list2current->val) {

                if (linkNode != NULL) {
                    linkNode->next = list2current;
                } else {
                    head = list2current;
                }

                linkNode = list2current;
                list2current = list2current->next;

            } else if (list1current->val < list2current->val) {

                if (linkNode != NULL) {
                    linkNode->next = list1current;
                } else {
                    head = list1current;
                }
                linkNode = list1current;
                list1current = list1current->next;
            

            } 
            
            else {
                if (linkNode != NULL) {
                    linkNode->next = list1current;
                } else {
                    head = list1current;
                }

                linkNode = list1current;
               list1current = list1current->next;
                linkNode->next = list2current;
                linkNode = list2current;

               
                list2current = list2current->next;
            }
        }

        while (list1current != NULL) {

            linkNode->next = list1current;
            linkNode = list1current;
            list1current = list1current->next;
        }

        while (list2current != NULL) {

            linkNode->next = list2current;
            linkNode = list2current;
            list2current = list2current->next;
        }

        linkNode->next = NULL;
        return head;
    }
};