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
// brute force
//     if(head==NULL)
//       return NULL;
//    unordered_set<ListNode *>s;
//   ListNode *temp=head;
 
//   while(temp->next!=NULL)
//   {
//     if(s.find(temp)!=s.end())
//     {
//         return temp;
//     }
//     s.insert(temp);
//     temp=temp->next;
    
//   }

//   return NULL;

ListNode *fast=head;
ListNode *slow=head;
if(head==NULL)
return NULL;

while(fast!=NULL&&fast->next!=NULL)
{
   fast=fast->next->next;
   slow=slow->next;
   if(fast==slow)
   {
    slow=head;
    if(fast==slow)
    return slow;
    break;

   }

}



while(fast!=NULL&&fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next;
    if(fast==slow)
    {
        return slow;
    }
}

return NULL;
   

    }
};