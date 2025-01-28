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
    ListNode *detectCycle(ListNode *head) {
    if(head==NULL)
      return NULL;
   unordered_set<ListNode *>s;
  ListNode *temp=head;
 
  while(temp->next!=NULL)
  {
    if(s.find(temp)!=s.end())
    {
        return temp;
    }
    s.insert(temp);
    temp=temp->next;
    
  }

  return NULL;
   

    }
};